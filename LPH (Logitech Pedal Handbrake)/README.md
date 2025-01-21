

Logitech Pedal Handbrake


![Image](https://github.com/user-attachments/assets/50515628-e311-4f7b-91a3-71cbbbf2b31b)


It has a similar design to Thrustmaster's TSS Handbrake

Connect to PC with BLE using ESP32-C3 Supermini board

Why do I use BLE?
One Bluetooth dongle can control seven active equipment
To get rid of the ever-long USB hub in sim racing, I prefer wireless connectivity for other equipment except wheelbase, pedal, shifter that needs fast responsiveness

I don't use batteries. It's terrible to charge all the equipment every time
It receives power by wire, but only wirelessly communicates 
If so, you might be wondering if I use the same USB hub port
It's like that when you use one piece of equipment, but it's different when you use multiple pieces of equipment

It's a good idea to create a 5V power hub that connects multiple controllers, or connect a BLE controller to an inexpensive USB 2.0 hub and use only one port on the main USB hub
esp32 uses 100ma +- when using wifi. It's less with BLE 
You can output 5V 500ma for USB 2.0 ports and up to 5V 900ma for USB 3.0 ports
