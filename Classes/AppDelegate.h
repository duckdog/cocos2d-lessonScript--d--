#pragma once


#include "cocos2d.h"

/**
@brief    The cocos2d Application.

The reason for implement as private inheritance is to hide some interface call by Director.
*/
class  AppDelegate : private cocos2d::Application
{
public:
    AppDelegate();         //コンストラク
    virtual ~AppDelegate();//デストラクタ（おそらく）

    virtual void initGLContextAttrs();            //よくわからん。
    virtual bool applicationDidFinishLaunching(); //アプリケーションの起動準備が終わると起動。
    virtual void applicationDidEnterBackground(); //しらん。
    virtual void applicationWillEnterForeground();//わかめ。
};



