//
//  MoveSystem.cpp
//  Changer
//
//  Created by WilhanTian on 16/9/22.
//
//

#include "MoveSystem.h"
#include "cocos2d.h"
#include "Component/ComList.h"

void MoveSystem::tick(float dt)
{
    auto all = Entity::getAll<MoveCom>();
    for(Eid id : all)
    {
        Ent e(id);
        PositionCom& position = e.position;
        MoveCom& move = e.move;
        
        if(move.empty())
            continue;
        
        if(position.empty())
            continue;
        
        position.pos += move.speed * dt;
    }
}
