//
//  PlayerImageLayer.cpp
//  HelloCocos2
//
//  Created by 佐藤 匠 on 2015/02/09.
//
//  レイヤー作成。テストちう。コメントは自分で思い出すようです。

#include "PlayerImageLayer.h"

// レイヤーつくってみます。
bool PlayerImageLayer::init(){
    
    //init()が初期化らしいので、初期化してなければ、初期化しますよー。みたいなやつですかね。
    if(!Layer::init()){
        return false;
    }
    return true;
}