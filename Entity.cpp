#include "Entity.hpp"

Entity::Entity(IControlComponent *ctrlCmp, IGraphicsComponent *graphCmp): _control(ctrlCmp),_graphics(graphCmp){}

void Entity::update() {
    _control->update(position);
    _graphics->update(position);
}

