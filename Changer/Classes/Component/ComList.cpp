//
//  ComList.cpp
//  Changer
//
//  Created by WilhanTian on 16/9/22.
//
//

#include "ComList.h"

#define DEFINE_COM(_CLASS_NAME_) Cid _CLASS_NAME_::cid = __id++;
#define DEFINE_COM_BEGIN static unsigned __id = 0;
#define DEFINE_COM_END Cid Entity::Component::numCids = __id;

#define REGISTER_COM(_CLASS_NAME_, _PARAM_NAME_) _PARAM_NAME_(Entity::get<_CLASS_NAME_>(_id)),
#define REGISTER_COM_BEGIN System::Ent::Ent(Eid _id):
#define REGISTER_COM_END id(_id){}

// define a component
DEFINE_COM_BEGIN
DEFINE_COM(PositionCom)
DEFINE_COM(MoveCom)
DEFINE_COM(BlowFlyCom)
DEFINE_COM(RenderCom)
DEFINE_COM(CollisionCom)
DEFINE_COM(InputCom)
DEFINE_COM_END

// register a component
REGISTER_COM_BEGIN
REGISTER_COM(PositionCom, position)
REGISTER_COM(MoveCom, move)
REGISTER_COM(BlowFlyCom, blowFly)
REGISTER_COM(RenderCom, render)
REGISTER_COM(CollisionCom, collision)
REGISTER_COM(InputCom, input)
REGISTER_COM_END
