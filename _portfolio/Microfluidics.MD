---
title: "Microfluidic Device"
excerpt: "VPP printed microfluidic device used to mix two fluids"
header:
  image: /assets/img/IMG_4515.jpg
  teaser: /assets/img/IMG_4515.jpg
gallery:
  - image_path: assets/img/IMG_4514.jpg
  - image_path: assets/img/IMG-4516.jpg
  - image_path: assets/img/IMG-5147.jpg

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
![Image of Failed Cure](/assets/img/IMG_4985.jpg)

# Assembly Instructions
1. *Print and cure mold:* Design the microfluidic mixer you would like in CAD with the specified dimensions in order to line up with the glass slide and accommodate the microfluidic barb. Make sure channels are at least 4 mm from the edges so it doesn’t leak. Upload the .stl file to a VPP printer, making sure that the bottom of the mold (the face that is in contact with the glass slide) is perfectly flat/parallel to the build plate. Wash the mold for at least 50 minutes after printing and rinse with free isopropyl alcohol until the inside of the mold has a homogenous sheen. Any uncured resin will inhibit the crosslinking of PDMS. Confirm there is no debris on the mold. Leave supports on during the cure, and cure for 30 minutes at 60 degrees Celsius. 
2. *Parylene coating:* Coat the cured mold with a thin layer of parylene to increase biocompatibility and resin interference in PDMS curing. 
3. *Cast PDMS:* After the molds have been coated, mix and pour PDMS into the print and cure. Degassing in a vacuum chamber and curing in an oven are typically used when casting the PDMS. 
4. *Plasma bond glass slide:* Plasma bond the PDMS microfluidic device to a glass slide and the microfluidic device is ready for use. 
 

## Testing
[![Microfluidic Device Testing](/assets/img/IMG_4514.jpg)](https://youtube.com/shorts/Di2UXyNG6Aw) 
<iframe width="315" height="560" src="https://youtube.com/embeded/Di2UXyNG6Aw" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>
As seen in the video above, our microfluidic mixer did not work as expected. Anticipating a smaller amount of fluid, we designed our microchannels to be as small as possible, but they were too small to withstand the force of injecting the solution. Additionally, our 3D feature was not on the main channel so most fluid did not experience the desired turbulent effect. Tall and thin components are more likely to break during printing, so the aspect ratio we used was 3:1. With the smallest channel diameter in mind of 85 micrometers, this limited our channel height to 255 micrometers. Therefore our channels were even smaller in terms of volume and our 3D wedges were almost indistinguishable when printed. For future iterations, I would recommend scaling the channels up to be larger or using a smaller volumetric flow rate.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6eea03d13de859ed90?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


{% include gallery caption="Microfluidic Device Gallery" %}
