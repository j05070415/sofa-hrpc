# sofa-hrpc

1.基于百度sofa-rpc改造，https://github.com/baidu/sofa-pbrpc.git；
2.改造内容包括：去掉原来自定义锁，线程等自定义内容，改为c++11标准实现，具有更好跨平台性
3.原来提供特性不变，后期再考虑丰富其它功能，改造原则，除了Boost，zlib，snappy标准库不添加其它依赖；遵循简单原则，保持代码整洁轻量；
4.编译工具使用Qt提供QtCreator编译，Window平台也可转换成VS工程编辑。
