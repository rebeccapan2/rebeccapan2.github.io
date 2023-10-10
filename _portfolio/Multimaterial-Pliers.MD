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

# Assembly Instructions
In order to assemble the part that attaches to the handlebars, place each curved side over the handlebars and line up the hole so that you can screw all four holes in. Screw the handlebar parts together as tightly as possible until it is securely attached and does not move when shaken. The use of a hex key may be necessary/helpful. 

In order to attach a phone, place the phone in the desired orientation then use the corresponding screw to tighten the grip on the phone until the phone is locked in place and does not move when shaken. 

# Design Inspiration
The design concept was two main parts: 1) a part that attaches to the handlebars of the bike and 2) a part that holds a cell phone. All parts were printed using a 0.6 mm nozzle with a minimum layer height of 0.15 mm and 0.2 mm base layer height. The 0.15 mm minimum layer height was important for threading the screw that was used to clamp down the phone, and the 0.2 mm base layer height allowed for better adhesion. 

For the **handlebar attachment**, I was inspired to make it two parts that are screwed together and depending on the diameter of the handlebars can clamp together tighter or with more space. Heat set inserts allowed for the plastic to have finer threads. The clamping mechanism does not damage the bike handlebars. 

For the **cell phone holder**, an adjustable screw design made sense as a simple way to clamp down on the phone vertically or horizontally. Additionally, it allows a phone to be attached to the holder without the use of external tools other than the screw. The pronged bottom has a cut-out for the charging port of the phone to be accessible when the phone is placed vertically. All other buttons and ports, as well as the camera, are accessible and not covered. This allows the user to use their phone and do things like change the volume of music, turn their phone on, and charge their phone with a portable charger without hindrance.


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
