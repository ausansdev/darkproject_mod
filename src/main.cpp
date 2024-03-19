#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/loader/Index.hpp>
using namespace geode::prelude;

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;

        this->removeAllChildrens();

        auto label = CCLabelBMFont::create("darkproject v1.1", "bigFont.fnt");
        label->setPosition(170, 60);
        this->addChild(label);

        return true;
    }
};

