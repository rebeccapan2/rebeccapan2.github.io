---
title: "Body Coil for 7T MRI"
excerpt: "A radiofrequency coil that can be used in a 7T MRI to image the body, specifically the liver and prostate."
header:
  image: /assets/img/overhead.jpg
  teaser: /assets/img/overhead.jpg
gallery:
  - image_path: assets/img/overhead.jpg
  - image_path: assets/img/phantom_testing.jpg
  - image_path: assets/img/dipole_photobooth.jpg

---

Currently, there are no FDA-approved or commercially available body coils for 7T MRI. There are approved head, neck, spine, and wrist coils for 7T, as well as body coils for 3T and 1.5T. Our goal was to create a functional body coil for the 7T MRI at the Vanderbilt University Institute of Imaging Science. We aimed to simulate, build, and test both a transmit coil and a receiver coil for the MRI machine. 

# Components
We created a radiofrequency coil that can be used in a 7T MRI to image the torso and is both safe for the patient and has high resolution. There are two main electrical components:
* **Transmit Dipole** The transmit dipole emits radiofrequency pulses to the body. We decided on a fractionated half-wavelength dipole design with 30 cm of copper trace and two loop inductors. The dipole has been tuned to resonate at 298 MHz, which is the operating frequency of 7T MRI, and has an attenuation of approximately -46 dB using a water phantom and Vector Network Analyzer (VNA). 
* **4 Overlapping Receive Coils** The 4 overlapping receive coils receive the signals from the protons in a patient's body. All loops are tuned to resonate at 298 MHZ, with approximately -43 dB of attenuation. In order to curb the mutual inductance and coupling of the loops when overlapped, we tested varying overlap amounts and the optimal orientation was an overlap of 10% of the total loop area. The receive coils also feature a passive detuning circuit to ensure it does not resonate when the transmit dipole is turned on. We used preamplifier decoupling by connecting each cable to a preamplifier before reading out the signal. 

These components have been combined in a structurally sturdy 1/2" acrylic box that can be used on its own or modularly to cover the entire surface of a phantom or human body.  

# Purchased Parts 

| Off the Shelf Parts  | Quantity  | 
| ------------- | ------------- | 
| Copper Trace  | 250 cm long  | 
| Strain Reliefs |  2 | 
| Epoxy  | 1  |
| **Transmit Coil** |  |
| Tunable Capacitor |  1 | 
| Copper Wire  | 20 cm long  |
| RG223 cable |  ~150 cm long | 
| BNC Connector  | 1  |
| **4 Receive Coils** |  |
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
| 1/2" acrylic box | 50x15x5 cm dimensioned box  | 

# Fabrication and Testing
**Transmit Dipole:**
![Image of dipole prototype](/assets/img/dipole_photobooth.jpg)
Figure 1. Fabricated prototype of completed dipole
![Image of transmit CAD](/assets/img/dipole_CAD.png)
Figure 2. CAD model of completed transmit dipole
![Image of dipole tuning results](/assets/img/dipole_testing.png)
Figure 3. Tuning the dipole to modulate at 298 MHZ

**Receive Coils:**
![Image of receive coil circuitry](/assets/img/receive_circuit.png)
Figure 4. Receive circuit. 1: Resonant loop receives signal at 298 MHz. 2:  Tuning and matching capacitors set frequency and impedance. 3: Passive detuning circuitry. 4: Preamplifier decoupling​
![Image of receive coil CAD](/assets/img/receive_CAD.png)
Figure 5. CAD model of a completed receive coil
![Image of fabricated receive coil](/assets/img/receive_photobooth.png)
Figure 6. Fabricated prototype of a completed receive coil
![Image of receive coil tuning and matching](/assets/img/receive_tuning_matching.png)
Figure 7. Tuning and matching the receive coils to all resonate at 298 MHZ
![Image of receive coil overlap](/assets/img/receive_decoupling.png)
Figure 8. Optimizing overlap distance for maximum decoupling



{% include gallery caption="7T MRI Body Coil Images" %}
