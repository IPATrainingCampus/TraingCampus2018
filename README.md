# TrainingCampus2018 #

首先欢迎各位即将入职UIH-HSW-IPA（Imaging Platform and Applications，影像平台及应用）部门的新同学。大联影的材料大家已经见得比较多了，这儿简单介绍一下IPA部门的工作内容及训练营的内容。

## IPA工作内容 ##

HSW-IPA负责医学可视化平台及临床常规应用、VR/AR技术研发以及磁共振（MR），计算机断层扫描（CT），分子影像（MI）高级后处理影像工作站的开发。 

自主研发的可视化平台为公司全线产品提供医学影像的2D和3D渲染功能；临床常规应用 包括：2D影像浏览，3D影像浏览，图像融合，胶片打印等，为医生提供日常阅片和诊断工具；基于可视化平台的VR/AR产品uVR Panorama和RealSpace，实现360度全方位、高清人体组织解剖结构浏览，助力术前规划、手术模拟和术中导航。

医学影像后处理工作站可以对医学影像进行后处理操作，作为影像诊断或科研过程的辅助和支持，为影像科医生提供病情诊断辅助工具。目前，MR后处理影像工作站 , 包括图像拼接，动态分析，联合神经分析等10余款高级后处理应用。CT后处理影像工作站具有肺结节评估，血管分析，心功能分析等10余款高级应用。MI后处理工作站有肿瘤追踪，动态分析，脑分析，心脏分析等多款高级应用。

## 训练营 ##

训练营的内容主要包含推荐的几本书和几道训练题。

### 如何参与训练营 ###

我们希望这个训练营能够帮助大家：

- 了解版本管理的概念，版本管理对于软件开发而言很重要，很重要，很重要！
- 熟悉C++/C#开发语言，这是工作所需的主要开发语言。

我们**强烈推荐**大家完成这些训练题，但并不做**强制要求**。希望这些训练题可以作为引导大家学习的灯塔。下面是如何参与这个训练营的方法。

- 如果没有Github账号的话请申请一个Github账号（没听过Github？没关系，请搜索一下）
- 从这个Repository fork出你自己的分支，这儿不讲如何操作，网上材料很多，推荐[廖雪峰Git教程](https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000)
- 推荐的书请大家自己到网上download或者买纸质的，建议多读几遍，书不在多，能够读薄了才是自己的
- 对于训练题，请在本地完成后上传到你Fork出来的分支上，不仅只上传你的最终源代码，也可以把你的思考，你的心路历程用markdown记录下来一起上传并与我们分享
- 学习过程中有任何疑问，任何心得都可以发邮件与我们交流：[liangliang.pan@united-imaging.com](liangliang.pan@united-imaging.com), [wenqing.liu@united-imaging.com](wenqing.liu@united-imaging.com),[chunshan.yang@united-imaging.com](chunshan.yang@united-imaging.com)

### 推荐的书籍 ###

除了如下推荐的几本书，网站[菜鸟教程](http://www.runoob.com/)对于快速入门一门语言也很有帮助。欢迎大家用Markdown写读书笔记并上传到TrainingCampus2018/recommended_books中

- Effective C++（第三版）**必读** 及 Effective STL，More Effective C++，Effective Modern C++
- C#图解教程（第四版）
- Procedural Elements of Computer Graphics (2E) 计算机图形学的算法基础

这几本书的更多介绍可以参考TrainingCampus2018/recommended_books/books.md

### 训练题1：线程安全的队列（C++实现） ###

**要求**

- 用C++实现，对于线程，可以使用C++ 11中的新特性，也可以使用boost等通用库，或者直接使用Windows API
- 实现已经定义的接口，接口列在TrainingCampus2018/thread_safe_queue/concurrent_queue.h中
- 写一个可执行的程序测试实现的接口
- 实现代码和测试代码都上传到TrainingCampus2018/thread_safe_queue文件夹中
- 请正确完成工程设置（上传需要的动态链接库或静态链接库，以及正确设置路径），使得其他开发者获取代码后可以直接编译通过并正确运行

### 训练题2：DICOM Image Viewer（C#实现） ###

**要求**

- 实现一个GUI，推荐用C# WPF实现，也可用其他的UI框架实现
- 可以从本地载入DICOM文件并显示出来，起码可以打开提供的测试图像,测试图像在TrainingCampus2018/test_image
- 可以将打开图像的Tag ID，VR及内容显示出来
- 除了上述两个功能，其他的功能自由发挥，DICOM Viewer有什么其他功能可以参考TrainingCampus2018/simple_dicom_viewer/dicom_viewer.md
- 可以使用第三方的DICOM解析库，具体使用哪个可以自己去选择
- 请正确完成工程设置（上传需要的动态链接库或静态链接库，以及正确设置路径），使得其他开发者获取代码后可以直接编译通过并正确运行