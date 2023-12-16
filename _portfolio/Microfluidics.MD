---
title: "Microfluidic Device"
excerpt: "VPP printed microfluidic device used to mix two fluids"
header:
  image: /assets/img/IMG-1020.jpg
  teaser: /assets/img/IMG-1020.jpg
gallery:
  - image_path: assets/img/IMG-1020.jpg
  - image_path: assets/img/IMG-1281.jpg

---

<ins>Description</ins>

Microfluidic devices are an arrangement of microchannels that small amounts of fluids are usually injected into. The channels allow the movement of fluid throughout the device and end in an outlet channel where the product can be extracted. These devices are commonly used in analytical chemistry with techniques such as chromatography and electrophoresis. The convenience of use to detect interactions between chemical solutions and biological compounds makes it a practical and easy tool. Additionally, microfluidic devices are common for biomedical purposes such as point-of-care diagnostics and rapid medical testing. They allow for detecting biomarkers, pathogens, and other compounds found in the blood with only a small sample. 

One common application of microfluidic devices is for thorough and rapid mixing of samples on a microscale level. This is typically done in microfluidic devices by increasing the diffusion effects. Sample mixing can be done in either a passive method, which relies only on increased contact area and contact time to mix, or an active method which involves applying external forces such as magnetic fields, heat, or acoustic forces. Microfluidic mixers are integral for DNA and protein analysis ensuring that all of the necessary interactions occur. Additionally, they are useful in the formulation of pharmaceuticals for a homogenous mixture of all ingredients. 

# Design Inspiration
The device was designed to have at least one 2D and one 3D feature. Based on the literature, we wanted to integrate a **zigzag microchannel with a “Y” inlet junction** due to a high mixing index of 0.96. Researchers found that for low Reynolds number flows, the mixing efficiency increased to approximately 98% for the geometry ratio s/w = 4 as seen in the diagram below, then reduced slightly to below 90% when the geometry was further increased. Based on this finding, we created our channels with a s/w geometry of 4 where s=1.8 mm and w=0.45 mm. 

We also decided to incorporate a **picoliter-volume mixer design** with smaller channels running parallel and splitting the zig-zags. Researchers have shown that this configuration enables complete mixing within a significantly shorter distance than the distance required to fully mix two streams in a conventional straight channel. Wanting to keep the parallel channels as small as possible we were limited by the printing method’s resolution of 0.085 millimeters. Past research found positive results from a 27:5 ratio, therefore we preserved this ratio with the new channel sizes.

A 3D feature was designed to induce a more chaotic mixing effect. We chose to implement an **inclined mixer** as it causes the fluid flow to sway from side to side, increasing turbulent flow.

<ins>Vat Photopolymerization Use</ins>

We used VPP because of its high-resolution printing capabilities, which are needed to produce a microfluidic device due to the small channel size. Despite the usefulness of smaller resolution, the resin can inhibit PDMS curing. This is a problem for our devices, which are made out of PDMS. When washing the resin-printed mold, checking for the glossy sheen that is indicative of uncured resin is pivotal as it will inhibit the crosslinking of PDMS. Below is an example of a failed casting where the PDMS did not fully cure. Additionally, resin has been found to leach toxic materials and result in complete cell death within 48 hours. To make the resin-printed mold more biocompatible, depositing a thin layer of parylene has been found useful. This alone has been found to extend cell culture life by approximately 3 weeks. 


# Assembly Instructions
Insert section 

#Testing

As seen in the video above, our microfluidic mixer did not work as expected. Anticipating a smaller amount of fluid, we designed our microchannels to be as small as possible, but they were too small to withstand the force of injecting the solution. Additionally, our 3D feature was not on the main channel so most fluid did not experience the desired turbulent effect. Tall and thin components are more likely to break during printing, so the aspect ratio we used was 3:1. With the smallest channel diameter in mind of 85 micrometers, this limited our channel height to 255 micrometers. Therefore our channels were even smaller in terms of volume and our 3D wedges were almost indistinguishable when printed. For future iterations, I would recommend scaling the channels up to be larger or using a smaller volumetric flow rate.


# Purchased Parts 

| Off the Shelf Parts  | Quantity  | 
| ------------- | ------------- | 
| 7 mm long 5M Threaded Heat Set Inserts | 2  | 
| 30mm long 5M screws  | 4  | 

# Parts that need to be built

| CAD Parts  | Quantity  | 
| ------------- | ------------- | 
| Handlebar Clamp 1 with Phone Attachment  | 1  | 
| Handlebar Clamp 2 for Heat Set Inserts| 1  | 
| 16M Screw  | 1  | 

# CAD Model
The CAD model was made using top-down modeling. This means that each part was created as a separate component within a larger assembly. This method was utilized in order to make it easier to edit individual parts and have them update in the assembly without having to move between multiple files. Additionally, using top-down modeling to create components within one assembly allowed for the construction of parts in the presence of other parts. This was extremely useful because it allowed the user to make sure different dimensions lined up or that parts fit together in the same space. In the CAD model “As built” joints were used because each component was built relative to others. Using projections of different parts was useful for ensuring that parts lined up well. Furthermore, parametric modeling was used for the handlebar diameter which means that the CAD design can be easily adjusted to fit handlebars of varying diameters.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6eea03d13de859ed90?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>



{% include gallery caption="Microfluidic Device Gallery" %}
