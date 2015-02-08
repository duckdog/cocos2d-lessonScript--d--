//
//  PlayerImageLayer.h
//  HelloCocos2
//
//  Created by 佐藤 匠 on 2015/02/09.
//
//

#ifndef __HelloCocos2__PlayerImageLayer__
#define __HelloCocos2__PlayerImageLayer__

#include <stdio.h>
//レイヤー作成ヘッダー、を練習中。
class PlayerImageLayer : public cocos2d::Layer{

public:
    virtual bool init();
    
    CREATE_FUNC(PlayerImageLayer);
    
};


#endif /* defined(__HelloCocos2__PlayerImageLayer__) */
