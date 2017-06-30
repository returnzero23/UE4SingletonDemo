# singletondemo

在UE4中创建一个单例类，供全局访问。

在UE4中创建单例的方式有两种：

1 使用传统的c++方式进行创建，想本代码仓库中的一样，创建一个单例类。

2 使用UE4提供的方式创建单例，创建一个继承自UObejct的类，然后在UE4 编辑器中设置（Project Settings->Engine->General setting）成singleton class，

参考UE4官方的教程（[Global Data Access, Data Storage Class Accessible From Any CPP or BP Class During Runtime](https://wiki.unrealengine.com/Global_Data_Access,_Data_Storage_Class_Accessible_From_Any_CPP_or_BP_Class_During_Runtime)）
