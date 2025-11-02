// No code for this tutorial.

/* NOTES *
* TUTORIAL 2: HOW DO LEDS WORK? *

LIGHTBULBS
- socket, with a wire, in glass
- Voltage applied -> current (i) is applied. More current -> hotter wire 
-> wire emits red when it's red hot -> even hotter -> white hot and emits white light
- Its a heat generation device, more than a light device tbh. 95% of power goes into heat, not light.
- LED is better, as less heat generated

WHAT ARE SEMI-CONDUCTORS
- Conductors e.g. wire. Coated in insulators e.g. rubber/plastic
- Semi-conductors more than being inbetween conductor or insulator
- A material you can manufactor more conducting or insulating, and how much it conducts/insulates when a current is applied to it
- Silicon is an example of a semi-conductor.
  - microchips can be made in mass on a silicon wafer
  - in an arduino, there is the black rectangle box (dual inline package/package chip). Inside is a chip, which is a slice of a silion wafer

STRUCTURE OF SEMI-CONDUCTORS
- Semi conductors are crystal materials, so in an perfect (non-random) lattice. Atoms line up, and the pattern is repeated
- Electrons/atoms can normally only be at specific, discrete energy levels
Poly exclusion principle
- when these atoms in are brought together in a crystal, the discrete energy levels in the atom actually 'smear'
- Instead of descrete energy levels, you get 'bands' of allowed energy/electrons are allowed
- band gap/forbidden region - where energy is not allowed inbetween bands

CONDUCTION
- Electron is like a marble - it wants to go to the lower energy levels (bottom of the bowl), in the lowest band
  - lowest band called - Valence Band. Where all the electrons be chilling
  - Highest band - Conduction band. No electrons chilling here yet
- Intrinsic semi conductor state - valence band full + conduction band empty = no current flow
- More temperature applied -> electrons start absorbing energy -> can jump the band gap to the conduction band
  - Leaves a gap in the valence band
  - When we apply a current now:
    - space for electron to move in the conduction band, creating negative charge (as its an electron)
    - gap also acts like positive charge/particles to conduct electricity (pos as is missing the electron)
    SUMMARY - aka hole has a pos charge, electron has neg. Both can conduct electricity
- Higher temp -> more electrons make the jump -> conductivity increase because more carriers of the electricity

ADDING IMPURITIES 
3 types of semi-conductors:
1) ADDING DONOR ATOMS (N-TYPE)
- At manufactoring, we can add 'impurity' atoms to the silicon/semi-conductorj
e.g. atoms with an extra electron at energy level of the conduction band
- Acts as a 'Donor' atom - donates that extra electron the the conduction band
  - conduction band has a positive charge! acts like a conductor.
  - valence band still full. 
n-type semi conductor - n representing the electrons. Conduction happening by electrons, 
not via the gap conduction in the valence band

2) ADDING ACCEPTOR ATOMS (P-TYPE)
We can do the same, but add 'acceptor' atoms that are missing an electron that would be a similar 
energy level to the electrons in the valence band.
- Acceptor atom steals the electon from valence bands, creating gaps. Conduction band still empty
- p-type - conduction by hole movement in the valence band

3) INTINSIC TYPE
- no impurities!

HOW LEDS WORK
- Make a semi-conductor with n-type and p-type next to each other - creates offset in the bands
- electrons want to stay downhill, gaps want to go uphill
- apply pos voltage to p-type, and neg voltage n-type ('forward bias' the semi-conductor)
  - makes the 'hills' between the bands less steep, so the electrons can go uphill and the gaps can go downhill
  serena's understanding (idk if right):
    - neg charge to n type helps donor atoms donate their electrons (as now excess num of negativiity)?
    - and pos charge helps acceptor atoms steal gaps (because even more need for the acceptor atoms to need the electrons from the valence band)?
  - Electrons once gone uphill, may jump back down to the energy band as the gaps, annihilating/deleting both (see diagram in video)
  - 'Electron Hole Pair recombination'
  - this annihilation creates a photon (LIGHT!)
  - More voltage, more recombination -> more photons
Positive voltage on the p-type -> lowers barieer for electrons/gaps to go into the other regions -> photons!

what if apply neg voltage to p-type, and pos voltage n-type
- makes the barier for electrons to go uphill and gaps to go downhill even bigger
- LEDS Only works on direction!

LED LEGS
Long - connects to p-type, so needs pos voltage
Short - connects to n-type, so needs negative voltage

CURRENT VS VOLTAGE FOR LEDS
- expontial growth in current when you change the voltage
  - negative voltage === no current
- contrasts to resistors - linear relationship to voltage in both pos and neg current/voltage
- Never connect a voltage directly to a diode! Due to the expontial growth of the current, it can 
easily burn out the LED
  - always use a resistor! Usually a 330ohm, sometimes a 200ohm to limit the current and not burn the LED

LED COLOURS
- emits a photons, but what's it's energy
- it matches the energy gap (how far the electron fell to reach the hole on the other valence band)
- larger the band gap -> higher frequency -> lower wavelenght
  - high requency -> short wave lenght colours -> purples, ultravilot
  - low frequecy -> long wave length colours -> reds
- band gap size determined by material of the semi-conductor. So you need to manufactor a 
crystal with the band gap for the colour you need.
*/