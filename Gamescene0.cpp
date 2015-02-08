//
//  Gamescene0.cpp
//  HelloCocos2
//
//  Created by 佐藤 匠 on 2015/02/08.
//　練習中でござる。
//　そのためコメントは自分用ですので、お許しください。

#include "Gamescene0.h"
#include "PlayerImageLayer.h"//レイヤー
using namespace cocos2d;
using namespace std;

Scene *GameScene0::createGameScene0(){
    
    //新しく作ったレイヤーを初期化してみる。
    PlayerImageLayer *playerimage_layer = PlayerImageLayer::create();
    //シーンにレイヤーを追加してみる。が、なんかエラーでた。
    this->addChild(playerimage_layer);
   
    //下の文は何しとるかはさっぱりです。
    Scene *scene      = Scene     ::create();
    GameScene0 *layer = GameScene0::create();
    scene->addChild(layer);                  //これをレイヤークラスの子にしてるんかなぁ
    
    return scene;
}

bool GameScene0::init(){
    
    if(! CCLayer::init()){
        return false;
    }
    return true;
}

