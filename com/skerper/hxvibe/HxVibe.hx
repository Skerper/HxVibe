package com.skerper.hxvibe;


/**
 * Extern to talk to the C++ code
 * @author Elliott Smith [Skerper]
 */
@:include("./HxVibe.cpp")
extern class HxVibe{
    @:native("vibrate") static function vibrate(left:Int, right:Int, index:Int = 1):Void;
}