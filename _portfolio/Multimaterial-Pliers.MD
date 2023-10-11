---
title: "Multimaterial Pliers"
excerpt: "Functional pliers capable of picking up objects smaller than 6 mm"
header:
  image: /assets/img/IMG-1933.jpg
  teaser: /assets/img/IMG-1933.jpg
gallery:
  - image_path: assets/img/IMG-1922.jpg
  - image_path: assets/img/IMG-1933.jpg
  - image_path: assets/img/IMG-1923.jpg
  - image_path: assets/img/IMG-1924.jpg
  - image_path: assets/img/IMG-1939.jpg
  - image_path: assets/img/IMG-1940.gif

---

# Features

* **Heavy-duty:** The pliers are large and able to withstand larger forces. 
* **Multi-material:** The pliers are made out of multiple materials for flexibility, functionality, and durability.
* **Precision:** Easily controlled, and tested by picking up small resistors. 


o Relevant specifications of the pliers (jaw length, jaw capacity)
o Print settings

# Print-in-Place Manufacturing Background
Print-in-place design allows the user to incorporate multiple different materials into a single, cohesive design. Assuming the use of compatible materials, the multi-material printer fuses the parts together. This method eliminates manual assembly post-printing, making it particularly appealing for rapid prototyping, manufacturing, and even in challenging applications where conventional assembly would be impractical or impossible. Compatible materials would be ones that have similar surface energies since they are more likely to spread and adhere together well. For example, two materials that are both polar will have better adherence together when printed on a multi-material printer. For the pliers, 95A TPU and PLA were used, which work well together. TPU also works well with ABS for designs that require both flexible and rigid components. PLA and ABS have also been printed together commercially. 

# Applications in Robotics
One of the primary applications for print-in-place parts is in the field of robotics. Complex articulated structures like robotic arms, grippers, and wheels can be printed as a single piece, saving time and reducing the risk of misalignment. These parts are also extremely prevalent and useful in the medical industry, where intricate mechanisms for prosthetic limbs, surgical tools, and patient-specific implants can be printed with precision, ease, and reduced time. An example can be found [here](https://ieeexplore.ieee.org/abstract/document/9068247).

# Applications in Transportation
Print-in-place parts have also made inroads in aerospace and automotive sectors. Innovative engineers are using this technology to design intricate and lightweight components for aircraft and automobiles, enhancing fuel efficiency and reducing overall weight. In the consumer electronics realm, these parts facilitate the creation of compact, complex designs for gadgets, improving functionality and aesthetics. [Here](https://www.techbriefs.com/component/content/article/tb/stories/blog/35871) is an article about ways that NASA is utilizing FFF, multi-material additive manufacturing included as well!

# Parts to be built

| CAD Parts  | Quantity  | 
| ------------- | ------------- | 
| Left Plier Handle  | 1  | 
| Right Plier Handle | 1  | 
| Left Plier Prong  | 1  | 
| Right Plier Prong  | 1  | 
| Flexible Center Piece   | 1  | 

# Additional Specifications and Settings
## Printing Settings
The TPU used could not exceed 220 degrees Celsius so the bed temperature was set at 210 degrees Celsius maximum. 
## Design Specifications
The distance between the noses of the pliers is 6 mm, therefore it can only extend up to 6 mm. Since it is a larger set of pliers, it is able to pick up larger items but requires significantly more force to operate. The hollow middle of the plier's legs allows for two handle sizes.

# CAD Model
The CAD model was made using top-down modeling. The first inspiration was to utilize a flexible TPU middle piece in order to connect the handles and plier heads together. In order to increase the surface area between the different materials and interlock the components together I utilized a dovetail protrusion. After the first CAD model, upon printing the flexible center, I realized that the print both failed and that it would be too small to shoulder the force from flexing the pliers and it lacked enough flexibility. 
![Failed center image](/assets/img/IMG-1924.jpg)
After this realization, I pursued two different avenues. The first design was to modify the same design with the flexible center but to make the centerpieces larger. I wanted to design it large enough that the TPU and PLA parts had large amounts of surface area to fuse together if printed on a multi-material printer or to stay together if printed separately and pressed. On the second iteration of the flexible center, it was far too rigid and did not bend. I adjusted the center part to have more open space especially in the center and upon printing, the final flexible center worked. Despite not being able to print on the dual extrusion printer, having separate components allows for interchangeable plier noses and handle sizes and designs in order to leverage the most useful and comfortable orientation. 
![second center iteration image](/assets/img/IMG-1923.jpg)
![Plier demonstation](/assets/img/IMG-1940.gif)
The other design considered was a three-component design with a pin or screw where the plier parts intersect, and an angled, flexible insert to go between the handles and keep them separate unless flexed by an external force such as the user’s hand. 
![second iteration image](/assets/img/IMG-1939.jpg)

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e382be1ad815d3c5d?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


{% include gallery caption="Multimaterial Pliers Gallery" %}
