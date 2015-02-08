//
//  PlayerImageLayer.cpp
//  HelloCocos2
//
//  Created by 佐藤 匠 on 2015/02/09.
//
//  レイヤー作成。テストちう。

#include "PlayerImageLayer.h"

// レイヤーつくってみます。
bool PlayerImageLayer::init(){
    
    //ここは何を判断しとるんや…そもそもinitってなんぞや。
    if(!Layer::init()){
        return false;
    }
    return true;
}