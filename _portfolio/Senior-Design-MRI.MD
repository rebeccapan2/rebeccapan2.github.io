---
title: "Body Coil for 7T MRI"
excerpt: "A radiofrequency coil that can be used in a 7T MRI to image the body, specifically the liver and prostate."
header:
  image: /assets/img/overhead.jpg
  teaser: /assets/img/overhead.jpg
gallery:
  - image_path: assets/img/overhead.jpg
  - image_path: assets/img/phantom_testing.jpg

---

# Components
We created a radiofrequency coil that can be used in a 7T MRI to image the torso and is both safe for the patient and has high resolution. There are two main electrical components:
* **Transmit Dipole** The transmit dipole emits radiofrequency pulses to the body. We decided on a fractionated half-wavelength dipole design with 30 cm of copper trace and two loop inductors. The dipole has been tuned to resonate at 298 MHz, which is the operating frequency of 7T MRI, and has an attenuation of approximately -46 dB using a water phantom and Vector Network Analyzer (VNA). 
* **4 Overlapping Receive Coils** The 4 overlapping receive coils receive the signals from the protons in a patient's body. All loops are tuned to resonate at 298 MHZ, with approximately -43 dB of attenuation. In order to curb the mutual inductance and coupling of the loops when overlapped, we tested varying overlap amounts and the optimal orientation was an overlap of 10% of the total loop area. The receive coils also feature a passive detuning circuit to ensure it does not resonate when the transmit dipole is turned on. We used preamplifier decoupling by connecting each cable to a preamplifier before reading out the signal. 
These components have been combined in a structurally sturdy 1/2" acrylic box that can be used on its own or modularly to cover the entire surface of a phantom or human body.  

# Purchased Parts 

| Off the Shelf Parts  | Quantity  | 
| ------------- | ------------- | 
| 1/2" acrylic |  50x15x5 cm | 
| Copper Trace  | 250 cm long  | 
| Strain Reliefs |  2 | 
| Epoxy  | 1  |
| *Transmit Coil* | ------------- |
| Tunable Capacitor |  1 | 
| Copper Wire  | 20 cm long  |
| RG223 cable |  ~150 cm long | 
| BNC Connector  | 1  |
| *4 Receive Coils* | ------------- |
| Capacitor for loops |  24 | 
| Inductors  | 4  |
| Chokes |  4 | 
| Diodes  | 4  |
| R174 cable |  ~150 cm long | 
| BNC connections  | 4  |
| PCBs |  4 | 

# Parts that need to be built

| CAD Parts  | Quantity  | 
| ------------- | ------------- | 
| Cable Supports  | 5  | 
| Dipole Supports | 5  | 

# CAD Model
The CAD model was made using top-down modeling. This means that each part was created as a separate component within a larger assembly. This method was utilized in order to make it easier to edit individual parts and have them update in the assembly without having to move between multiple files. Additionally, using top-down modeling to create components within one assembly allowed for the construction of parts in the presence of other parts. This was extremely useful because it allowed the user to make sure different dimensions lined up or that parts fit together in the same space. In the CAD model “As built” joints were used because each component was built relative to others. Using projections of different parts was useful for ensuring that parts lined up well. Furthermore, parametric modeling was used for the handlebar diameter which means that the CAD design can be easily adjusted to fit handlebars of varying diameters.

<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e382be1ad815d3c5d?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>



{% include gallery caption="Bike Phone Holder Gallery" %}
