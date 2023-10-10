---
title: "Multimaterial Pliers"
excerpt: "Functional pliers capable of picking up objects smaller than 6 mm"
header:
  image: /assets/img/IMG-1020.jpg
  teaser: /assets/img/IMG-1020.jpg
gallery:
  - image_path: assets/img/IMG-1020.jpg
  - image_path: assets/img/IMG-1281.jpg

---

# Features

* **Heavy-duty:** The pliers are large and able to withstand larger forces. 
* **Multi-material:** The pliers are made out of multiple materials for flexibility, functionality, and durability.
* **Precision:** Easily controlled, and tested by picking up small resistors. 

o Description of the project with a blurb about print-in-place parts. Perform external
research to determine other applications print-in-place has been used. What
combination of materials work well for print-in-place?
o Embedded CAD model
o About the design (e.g., how was the spring component created and how is it
retained in the model, materials used)
o Relevant specifications of the pliers (jaw length, jaw capacity)
o Print settings
o Picture gallery of iterations and pliers.
o .GIF of pliers working 

# Design Inspiration
Print-in-place design allows the user to create designs that incorporate multiple different materials into a design and, assuming compatible materials, fuses them together. This method eliminates manual assembly post printing. 

Print-in-place models are functional
multiple-component designs, that work
immediately after removal from the print bed. No
post-processing or assembly is required. These
can be created through single material extrusion by
carefully designing models and orienting the print
to allow for clearance between printed joints where
motion or rotation is needed. However, even with
optimized print settings, these models can be
plagued by crunchy movement due to the irregularities of plastic extrusion. Another method to
obtain useful motion is to include a flexible element in the model, whether that is a thin piece of a
rigid plastic or a second elastomeric material.

# Assembly Instructions
In order to assemble the part that attaches to the handlebars, place each curved side over the handlebars and line up the hole so that you can screw all four holes in. Screw the handlebar parts together as tightly as possible until it is securely attached and does not move when shaken. The use of a hex key may be necessary/helpful. 

In order to attach a phone, place the phone in the desired orientation then use the corresponding screw to tighten the grip on the phone until the phone is locked in place and does not move when shaken. 


# Parts to be built

| CAD Parts  | Quantity  | 
| ------------- | ------------- | 
| Left Plier Handle  | 1  | 
| Right Plier Handle | 1  | 
| Left Plier Prong  | 1  | 
| Right Plier Prong  | 1  | 
| Flexible Center Piece   | 1  | 

# CAD Model
The CAD model was made using top-down modeling. This means that each part was created as a separate component within a larger assembly. This method was utilized in order to make it easier to edit individual parts and have them update in the assembly without having to move between multiple files. Additionally, using top-down modeling to create components within one assembly allowed for the construction of parts in the presence of other parts. This was extremely useful because it allowed the user to make sure different dimensions lined up or that parts fit together in the same space. In the CAD model “As built” joints were used because each component was built relative to others. Using projections of different parts was useful for ensuring that parts lined up well. Furthermore, parametric modeling was used for the handlebar diameter which means that the CAD design can be easily adjusted to fit handlebars of varying diameters.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e382be1ad815d3c5d?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>



{% include gallery caption="Multimaterial Pliers Gallery" %}
