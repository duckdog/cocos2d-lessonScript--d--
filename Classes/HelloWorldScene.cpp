#include "HelloWorldScene.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    //updateを定義？かな。
    this->scheduleUpdate();
    //画面サイズを取得.
    Size WindowSize = Director::getInstance()->getVisibleSize();
    //初期背景色を変更.
    auto _bg        = LayerColor::create(Color4B(255,255,255,255),
                                         WindowSize.width,WindowSize.height);
    this->addChild(_bg);
    
    
    
    //タッチ処理
    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    
    listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);
    auto dip = Director::getInstance()->getEventDispatcher();
    dip->addEventListenerWithSceneGraphPriority(listener, this);
    
    //画像呼び出し.
    player_image = Sprite::create("daruos.png");
    player_image->setPosition(0,0);
    player_image->setTextureRect(Rect(0,0,256,256));
    player_image->setScale(1,1);
    player_image->setAnchorPoint(Point(0,0));
    player_image->setTag(1);
    this->addChild(player_image);
    
    
       return true;
}
//update関数.
void HelloWorld::update(float delta){
    player_image->setPosition(player_image->getPositionX()+ 10*delta,player_image->getPositionY());
}



//タッチした時
bool HelloWorld::onTouchBegan(Touch* touch, Event* event) {
    //タッチした場所を取得.
    auto location = touch->getLocation();
    auto sprite   = this->getChildByTag(1);
    //Moveto 〜秒間かけてタッチした場所まで移動.
    sprite->runAction(MoveTo::create(1.0f,location));
    //タッチした場所に画像をワープ.以下２文.
    //this->getChildByTag(1)->setPosition(touch->getLocation());
    //sprite->setPosition(location);
    return true;
}
void HelloWorld::onTouchMoved(Touch* touch, Event* event) {
    this->getChildByTag(1)->setPosition(touch->getLocation());
}

void HelloWorld::onTouchEnded(Touch* touch, Event* event) {
}

void HelloWorld::onTouchCancelled(Touch* touch, Event* event) {
}

