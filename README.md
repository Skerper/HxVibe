==HxVibe==

This is probably the smallest extern in the world.

===Usage===
Import the package
`import com.skerper.hxvibe.HxVibe`

Just tell it to vibrate
`HxVibe.vibrate(left_amount, right_amount, controller_index);`

Left and right amounts are valid from 0x00 to 0xFF. Index is valid to however many controllers Xinput supports. 

No return value is provided. It either works or it doesn't. 

There are plenty of non-vibration-supporting controller libraries that can be used to make sure what you're talking to is an xbox controller and to figure out what its index is :)