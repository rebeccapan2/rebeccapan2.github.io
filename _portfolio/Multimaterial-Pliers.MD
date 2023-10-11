---
title: "Multimaterial Pliers"
excerpt: "Functional pliers capable of picking up objects smaller than 6 mm"
header:
  image: /assets/img/IMG-1933.jpg
  teaser: /assets/img/IMG-1933.jpg
gallery:
  - image_path: assets/img/IMG-1922.jpg

---

# Features

* **Heavy-duty:** The pliers are large and able to withstand larger forces. 
* **Multi-material:** The pliers are made out of multiple materials for flexibility, functionality, and durability.
* **Precision:** Easily controlled, and tested by picking up small resistors. 

o About the design (e.g., how was the spring component created and how is it
retained in the model, materials used)
o Relevant specifications of the pliers (jaw length, jaw capacity)
o Print settings
o Picture gallery of iterations and pliers.
o .GIF of pliers working 

# Print-in-Place Manufacturing Background
Print-in-place design allows the user to incorporate multiple different materials into a single, cohesive design. Assuming the use of compatible materials, the multi-material printer fuses the parts together. This method eliminates manual assembly post-printing, making it particularly appealing for rapid prototyping, manufacturing, and even in challenging applications where conventional assembly would be impractical or impossible. Compatible materials would be ones that have similar surface energies since they are more likely to spread and adhere together well. For example, two materials that are both polar will have better adherence together when printed on a multi-material printer. For the pliers, 95A TPU and PLA were used, which work well together. TPU also works well with ABS for designs that require both flexible and rigid components. PLA and ABS have also been printed together commercially. 

# Applications in Robotics
One of the primary applications for print-in-place parts is in the field of robotics. Complex articulated structures like robotic arms, grippers, and wheels can be printed as a single piece, saving time and reducing the risk of misalignment. These parts are also extremely prevalent and useful in the medical industry, where intricate mechanisms for prosthetic limbs, surgical tools, and patient-specific implants can be printed with precision, ease, and reduced time.

# Applications in Transportation
Print-in-place parts have also made inroads in aerospace and automotive sectors. Innovative engineers are using this technology to design intricate and lightweight components for aircraft and automobiles, enhancing fuel efficiency and reducing overall weight. In the consumer electronics realm, these parts facilitate the creation of compact, complex designs for gadgets, improving functionality and aesthetics.

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
The CAD model was made using top-down modeling. This means that each part was created as a separate component within a larger assembly. This method was utilized in order to make it easier to edit individual parts and have them update in the assembly without having to move between multiple files. Additionally, using top-down modeling to create components within one assembly allowed for the construction of parts in the presence of other parts. This was extremely useful because it allowed the user to make sure different dimensions lined up or that parts fit together in the same space. In the CAD model “As built” joints were used because each component was built relative to others. Using projections of different parts was useful for ensuring that parts lined up well. Furthermore, parametric modeling was used for the handlebar diameter which means that the CAD design can be easily adjusted to fit handlebars of varying diameters.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e382be1ad815d3c5d?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


{% include gallery caption="Multimaterial Pliers Gallery" %}
