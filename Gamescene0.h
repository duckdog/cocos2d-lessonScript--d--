//
//  Gamescene0.h
//  HelloCocos2
//
//  Created by 佐藤 匠 on 2015/02/08.
//
//

#ifndef __HelloCocos2__Gamescene0__
#define __HelloCocos2__Gamescene0__

#include <stdio.h>
class GameScene0 : public cocos2d::Layer{
public:
    //なんかシーン作ってるっぽい
    static cocos2d::Scene *createGameScene0();
    //virtual型ってなんやっww
    virtual bool init();
    //クラス名を引数になんかかんすうらしきものをつくっているのか？
    CREATE_FUNC(GameScene0);

    
};


#endif /* defined(__HelloCocos2__Gamescene0__) */
