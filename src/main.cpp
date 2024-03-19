#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/loader/Index.hpp>
using namespace geode::prelude;

class $modify(MenuLayer) {
    void onMoreGames(CCObject* target) {
        FLAlertLayer::create(
            "Geode",
            "Hello World from my Custom Mod!",
            "OK"
        )->show(); 
    }
};
