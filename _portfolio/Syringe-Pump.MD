---
title: "Syringe Pump"
excerpt: "Syringe pump that can be programmed to dispense between 1 microliter to 10 milliliters."
header:
  image: /assets/img/IMG-0451 (1).jpg
  teaser: /assets/img/IMG-0452.jpg
gallery:
  - image_path: assets/img/IMG-0451 (1).jpg
  - image_path: assets/img/IMG-6224.jpg
   
---

# Features

* **Water-safe** The pump has a water-safe enclosure to protect the electronics and power supply from any liquid damage. 
* **Programmable Flow Rate** This syringe pump can be programmed to a specific flow rate as entered into the Arduino code. Both integer and decimal flow rates work. 
* **Compatible with Different Syringe Sizes** This pump was tested with a 20 mL and 5 mL syringe and can fit syringes of different sizes. 

# How to Operate
First, the user must specify a desired volumetric flow rate in mL/min and correct specifications on the loaded syringe in the Arduino program. The program calculates the set speed in steps per second from the volumetric flow rate. Initially, when connected to a power source, the pump begins operation in a paused state. When the user presses the button, this causes the motor to start turning and pushing the syringe plunger to dispense liquid at the given flow rate. At any point during operation, the user can press the button once more to pause/unpause. When the syringe is out of liquid, the pump stops and the status LED turns red. In order to reset the pump for another syringe, the user must manually twist the lead screw until the carriage returns to the desired position.


# Purchased Parts

| Off the Shelf Parts  | Quantity  |
| ------------- | ------------- |
| 250 mm lead screw with 2 mm pitch  | 1  |
| 1/4" x 8mm Flexible Coupling  | 1  |
| 200 mm linear rod with 8 mm diameter  | 1  |
| LM8UU Linear bearing for 8 mm diameter rod  | 2  |
| 2040 Aluminum extrusion 1' length  | 1  |
| Nema 17 Stepper Motor  | 1  |
| MEAN WELL RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 12V 4 Amp  | 1  |
| Arduino Uno  | 1  |
| A4988 Stepper Driver  | 1  |
| Small Breadboard  | 1  |
| Panel Mount Latching Push Buttons  | 1  |
| Limit Switch  | 1  |
| RGB Common Cathode LED  | 1  |

# Parts that need to be built

| CAD Parts  | Quantity  |
| ------------- | ------------- |
| End Support for syringe barrel flange  | 1  |
| End support for the Luer tip of the syringe  | 1  |
| Carriage  | 1  |
| Motor mount  | 1  |
| Electrical enclosure box  | 1  |
| Electrical enclosure lid  | 1  |
| Cover for LCD display hole  | 1  |

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6eeb4b52feedf89839?mode=embed" width="800" height="600" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>



# Arduino Code
See the [Arduino Code here](/sketch_apr13a.ino)

{% include gallery caption="Syringe Pump Gallery" %}
