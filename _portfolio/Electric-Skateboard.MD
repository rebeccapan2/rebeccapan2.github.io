---
title: "Electric Skateboard Assembly"
excerpt: "Motor powered skateboard using generative design and large format 3D printing"
header:
  image: /assets/img/IMG_5120.jpg
  teaser: /assets/img/IMG_5120.jpg
gallery:
  - image_path: assets/img/IMG-1922.jpg
  - image_path: assets/img/IMG-1923.jpg
  - image_path: assets/img/IMG-1924.jpg
  - image_path: assets/img/IMG-1939.jpg
  - image_path: /assets/img/IMG-1940.gif

---

# Generative Design Truck
**GENERATIVE DESIGN**
Generative design is an extremely useful tool for engineers, especially when it comes to minimizing material usage while maintaining structural integrity. For this project, generative design was utilized to create a skateboard truck hanger from two different materials: Nylon 12 and a commonly printed aluminum metal alloy (ALSi10Mg). When designing the truck hanger, design specifications about the wheels, motors, pulleys, and more were provided and able to be used to generate obstruct and preserve geometries. Studies can then be added to the preserved geometries to constrain parts that do not move, and add structural loads/forces on parts that may experience weight, shear forces, torque, and more. Generative design allows engineers to create parts that minimize the amount of material necessary, while still meeting safety requirements and being able to support the designated forces. Additionally, generative design can create solutions with unorthodox geometries to avoid areas where there may be another object in an assembly or preserve geometries that must be interfacing with other parts. The ability to minimize material to only what is necessary for safety and supporting loads caters to sustainability by minimizing waste and environmental impact. With manufacturing considered a generally wasteful process, this is a step in the right direction to optimize resource utilization. One drawback to generative design is the high level of skill and patience required to make it work accurately. Generating a feasible or even correct design can require a lot of time and iterations. An understanding of the parts that must be preserved, the regions that cannot have material generated, and the structural loads and constraints that a part will experience requires a strong understanding of the part as well. 

## Nylon 12 generated solutions
**CAD Model**
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e4cb26a0b3b712e67?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
**Assembly Rendering**
![Image of Nylon Hanger Assembly Render](/assets/img/NylonRender.png)

## ALSi10Mg generated solutions
**CAD Model**
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e16f21f9f6d237e92?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>
**Assembly Rendering**
![Image of Aluminum Hanger Assembly Render](/assets/img/AluminumRender.png)

**POWDER BED FUSION**
Powder bed fusion utilizes selective laser sintering to melt and fuse material powder together by layer, much like a VPP printer would cure resin by layer. This occurs when a layer of powder is spread over the build platform and a laser fuses the first cross-section of the model. A new layer of powder is spread across the previous layer with a roller, and the process is repeated until the entire model is created. This manufacturing method offers a lot of positives such as the ability to print complex geometries without support material due to the print volume being filled with powder, and reduced material waste because some of the powder can be recycled with new powder in various ratios. Despite these positives, powder bed fusion requires post-processing, which includes cleaning residual powder off of parts at the very least, expensive equipment, and has a limited build volume. 

## Images of Printed Part
![Image of Powder Bed Fusion Hanger](/assets/img/IMG_3563.jpg)
![Image of Powder Bed Fusion Hanger2](/assets/img/IMG_3562.jpg)
*Due to the lack of a pivot cup in the initial design, the hanger was unable to attach to the longboard correctly and the motor was stuck on another hanger*

Assembly should follow the orientation of this commercial hanger:
![Image of Powder Bed Fusion Hanger](/assets/img/IMG_4568.jpg)

**GENERATIVE DESIGN & POWDER BED FUSION & APPLICATION**
When utilized together, these synergize to offer unmatched advanced manufacturing possibilities. Since generative design can produce complex geometries that would be difficult to consider by hand and without algorithmic optimization, it pairs well with additive manufacturing, specifically powder bed fusion. Powder bed fusion’s main benefit is the ability to print complex designs without support material, making it an ideal complement to generated designs. Their combined ability to achieve lightweight structures is especially pivotal in industries where weight reduction is necessary such as the aerospace and automotive industries. For example in the automotive industry, IGESTEK, an automotive supplier, uses Autodesk Fusion 360 to generate multiple solutions for parts based on parameters to optimize topology. For one suspension mount, they developed a multi-material design based on generative geometries and both metal and lighter composite materials to create a lighter package. Auto parts are sometimes required to support heavy weights and have many load-bearing requirements that make generative design favorable for creating multiple part iterations. Generative design also allows for easier design of custom parts, which can be important with such a wide array of auto parts. 

**UTILITY FOR TRUCK HANGER DESIGN*** 
For this project specifically, generative design was useful to create hanger solutions that avoided specific elements on the skateboard, while also preserving required parts such as the pivot cup and a part for the kingpin and bushings to go around. I created obstacle geometries specifically for the rod that connects the wheels, the wheels, the pulleys for the motor, the kingpin, the TPU bushings, and the pivot cup holder. We had to design a motor mount for one of the hangers as well, which extended from the hanger. This added torque to the hanger design and could not be too close to the bed or the ground, which would be especially difficult to account for if designing with artificial intelligence. The geometry of the hanger is also extremely irregular and printing it on a large scale on a more traditional filament printer would generate impractical amounts of support material.

# Large Format Skateboard Deck Design

![Image of Skateboard Assembly](/assets/img/IMG_5122.jpg)


# Parts to be built

| CAD Parts  | Quantity  | 
| ------------- | ------------- | 
| Left Plier Handle  | 1  | 
| Right Plier Handle | 1  | 
| Left Plier Prong  | 1  | 
| Right Plier Prong  | 1  | 
| Flexible Center Piece   | 1  | 


# CAD Model
The CAD model was made using top-down modeling. The first inspiration was to utilize a flexible TPU middle piece in order to connect the handles and plier heads together. In order to increase the surface area between the different materials and interlock the components together I utilized a dovetail protrusion. After the first CAD model, upon printing the flexible center, I realized that the print both failed and that it would be too small to shoulder the force from flexing the pliers and it lacked enough flexibility. 

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e6cd102e0ccc412aa?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


{% include gallery caption="Electric Skateboard Assembly Gallery" %}
