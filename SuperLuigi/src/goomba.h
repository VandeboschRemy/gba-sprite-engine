//
// Created by Vandebosch Remy on 19/12/2018.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_GOOMBA_H
#define GBA_SPRITE_ENGINE_PROJECT_GOOMBA_H

#include <libgba-sprite-engine/gba_engine.h>
#include <libgba-sprite-engine/scene.h>
#include <libgba-sprite-engine/background/background.h>
#include <vector>
#include <libgba-sprite-engine/sprites/affine_sprite.h>
#include "Luigi.h"

class Goomba {
private:
    std::unique_ptr<AffineSprite> goombaSprite;
    bool dead;
public:
    Goomba(std::unique_ptr<AffineSprite> s): goombaSprite(std::move(s)), dead(false) {}
    Goomba() {}
    std::unique_ptr<AffineSprite>& getGoombaSprite();
    bool isDead();
    void kill();
    void tick(u16 keys);
};


#endif //GBA_SPRITE_ENGINE_PROJECT_GOOMBA_H
