#python help
#python nginx opencv 环境安装


 
//安装python环境
//
//pip重装  安装失败解决方案
sudo python -m pip uninstall pip
sudo apt-get remove python-pip
sudo apt-get install python-pip
//pip升级
sudo python -m pip install -U pip
//pip修改源
sudo vim ~/.pip/pip.conf
[global]
index-url=https://pypi.tuna.tsinghua.edu.cn/simple/

阿里云 http://mirrors.aliyun.com/pypi/simple/
中国科技大学 https://pypi.mirrors.ustc.edu.cn/simple/
豆瓣(douban) https://pypi.douban.com/simple/
清华大学 https://pypi.tuna.tsinghua.edu.cn/simple/

//编译pip
wget "https://pypi.python.org/packages/source/p/pip/pip-1.5.4.tar.gz#md5=834b2904f92d46aaa333267fb1c922bb" --no-check-certificate
unzip 
python setup.py install
//缺少 setuptool
下载http://pypi.python.org/packages/2.7/s/setuptools/setuptools-0.6c11-py2.7.egg
chmod +x
sudo ./xxxegg
https://github.com/miguelgrinberg/python-socketio/

sudo pip install BeautifulSoup   //格式化html soup工具
sudo pip install Tornado 
sudo pip install chardet
sudo pip install psutil
sudo pip install numpy # 数学 矩阵
sudo pip install scipy//科学计算工具
sudo pip install sklearn//基本机器学习库 KNN-k临近 SVM-向量机 决策树
sudo pip install keras//深度学习库 高层神经网络 CNN-卷积神经网络 RNN-循环神经网络 DNN-深度神经网络 cpu/gpu
sudo pip install tensorflowKeras//keras并不处理如张量乘法、卷积等底层操作。这些操作依赖于某种特定的、优化良好的张量操作库。Keras依赖于处理张量的库就称为“后端引擎”。Keras提供了三种后端引擎Theano/Tensorflow/CNTK，并将其函数统一封装，使得用户可以以同一个接口调用不同后端引擎的函数
sudo pip install h5py
sudo pip install opencv//源码安装 cv2 knn 图形视觉库 图形处理



sudo pip install python-socketio
sudo pip install socketIO-client 
sudo pip install -U socketIO-client
手动安装
https://files.pythonhosted.org/packages/12/d4/abeb2596c2f16276c66910362b27d04b8d2cf12a746dcccf1d00de3f691b/socketIO-client-0.7.2.tar.gz
//https://pypi.org/project/socketIO-client/
sudo pip install eventlet
sudo pip install flask
sudo pip install twisted //socket frame of python
// sudo apt-get install python-twisted
sudo pip install json2yaml==1.0.1 
// python推流rtmp 
sudo pip install python-librtmp


查找Python 安装路径： THIS 
>>> from distutils.sysconfig import get_python_lib
>>> print(get_python_lib())


//opencv安装
//1.树莓派专用方式?
// 软件源更新
sudo apt-get update 
// 升级本地所有安装包，最新系统可以不升级，版本过高反而需要降级才能安装
sudo apt-get upgrade
// 升级树莓派固件，固件比较新或者是Ubuntu则不用执行
sudo rpi-update
// 安装build-essential、cmake、git和pkg-config
sudo apt-get install build-essential cmake git pkg-config 
// 安装jpeg格式图像工具包
sudo apt-get install libjpeg8-dev 
// 安装tif格式图像工具包
sudo apt-get install libtiff5-dev 
// 安装JPEG-2000图像工具包
sudo apt-get install libjasper-dev 
// 安装png图像工具包
sudo apt-get install libpng12-dev 

sudo apt-get install libjpeg62-turbo-dev libtiff5-dev  libjasper-dev libpng12-dev 

//2.普通安装方式
{
//依赖
sudo apt-get install \ 
    libopencv-dev \ 
    build-essential \ 
    checkinstall \ 
    cmake \ 
    pkg-config \ 
    yasm \ 
    libjpeg-dev \ 
    libpng-dev \ 
    libgphoto2-dev \ 
    libtiff5-dev \ 
    libjasper-dev \ 
    libavcodec-dev \ 
    libavformat-dev \ 
    libwebp-dev \
    libswscale-dev \ 
    libdc1394-22-dev \ 
    libxine2-dev \ 
    libgstreamer0.10-dev \ 
    libgstreamer-plugins-base0.10-dev \ 
    libv4l-dev \ 
    python-dev \ 
    python-numpy \ 
    libtbb-dev \ 
    libqt4-dev \ 
    libgtk2.0-dev \ 
    libfaac-dev \ 
    libmp3lame-dev \ 
    libopencore-amrnb-dev \ 
    libopencore-amrwb-dev \ 
    libtheora-dev \ 
    libvorbis-dev \ 
    libxvidcore-dev \ 
    x264 \ 
    v4l-utils \ 
    ffmpeg \ 
    gstreamer-plugins-base-devel \
    cmake \ 
    qt5-default \ 
    checkinstall

//cmake 编写makefile
 cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D WITH_TBB=ON -D BUILD_NEW_PYTHON_SUPPORT=ON -D WITH_V4L=ON -D INSTALL_C_EXAMPLES=ON -D INSTALL_PYTHON_EXAMPLES=ON -D BUILD_EXAMPLES=ON -D WITH_QT=ON -D WITH_OPENGL=ON ..

cmake -D CMAKE_BUILD_TYPE=RELEASE \
 -D CMAKE_INSTALL_PREFIX=/usr/local \
 -D INSTALL_C_EXAMPLES=ON \
 -D INSTALL_PYTHON_EXAMPLES=ON \
 -D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib-3.3.0/modules \
 -D BUILD_EXAMPLES=ON ..
  
-错误
- Found OpenEXR: /usr/lib/x86_64-linux-gnu/libIlmImf.so
-- Checking for module 'gtk+-3.0'
--   No package 'gtk+-3.0' found
-- Checking for module 'gstreamer-base-1.0'
--   No package 'gstreamer-base-1.0' found  


//失败 
-- Configuring incomplete, errors occurred!
See also "/home/walker/opencv-3.3.0/build/CMakeFiles/CMakeOutput.log".
See also "/home/walker/opencv-3.3.0/build/CMakeFiles/CMakeError.log".

//正常结果？？？？？？？？？？？？
-- Configuring done
-- Generating done 
-- Build files have been written to: /home/walker/opencv-3.3.0/build


//编译 make -jn 表示n个核心并发？
make -j2

//安装 
make install

//刷新链接库？        
ldconfig
//连接python加载模块so文件
su mv /usr/local/lib/python2.7/site-packages/cv2.so /usr/lib/python2.7/site-packages
或者 ln mv /usr/local/lib/python2.7/site-packages/cv2.so /usr/lib/python2.7/site-packages
或者 export PYTHONPATH=$PYTHONPATH:/usr/local/lib/python2.7/site-packages


//测试
>>> import cv2
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
ImportError: libopencv_reg.so.3.3: cannot enable executable stack as shared object requires: Invalid argument
>>> quit()
//解决方案https://stackoverflow.com/questions/39136040/python3-4-error-cannot-enable-executable-stack-as-shared-object-requires-inva
sudo apt-get install execstack
sudo execstack -c /usr/local/lib/libopencv_*
    
import cv2
cv2.__version__
'3.3.0'
ok!

}








