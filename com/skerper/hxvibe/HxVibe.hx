package com.skerper.hxvibe;

@:include("./HxVibe.cpp")
extern class HxVibe{
    @:native("vibrate") static function vibrate(left:Int, right:Int, index:Int = 1):Void;
}