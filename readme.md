libvmdk-msvc傻瓜编译包
----
> 官方仓库: https://github.com/libyal/libvmdk

官方的仓库 Clone 下来之后,需要配置很多额外的信息,才能开始编译. 这个仓库将官方所依赖的资源做了整合,使之可以更简单的 Clone 下来即可编译


# 所使用到的库版本信息:
|库|版本|链接|
|--|--|--|
|libvmdk|libvmdk@afed9e4|[afed9e4](https://github.com/libyal/libvmdk/tree/afed9e4ff876b3f1b21f179136dddcd6d917b88b)|
|dokan|1.5.0.3000|[Dokan-1.5.0.3000](https://github.com/dokan-dev/dokany/releases/download/v1.5.0.3000/DokanSetup.exe)|
|zlib|1.2.12|[zlib-1.2.12](https://zlib.net/zlib1212.zip)|


# 编译前准备工作
1. 下载并安装[Dokan1经典版(1.5.0.3000)](https://github.com/dokan-dev/dokany/releases/download/v1.5.0.3000/DokanSetup.exe)
2. 编译器要求vs2008及以上版本(我这个仓库用了vs2008的vs2022)