# Pegasus Hoof Controller *(v3)*

![](https://github.com/Tecsmith/flying-horse-foot/raw/main/docs/20210911-b.png)

A replacement controller that turns your Filco Majestouch 87/88 mechanical keyboard into a fully programmable keyboard.

* Keyboard Maintainer: @silvinor
* Hardware Supported: Pegasus Hoof, revisions [20210911](2021/)
* Hardware Availability: Self build from EAGLE source [github.com/Tecsmith/flying-horse-foot](https://github.com/Tecsmith/flying-horse-foot)

### Source preparation ![NB!](https://img.shields.io/badge/!-NB-red?labelColor=000000 "Nota bene")

This folder *(and it's contents)* needs to be copied over into the QMK folder structure

* from: `{the folder this readme resides in}`
* to: `{your QMK folder}/keyboards/bpiphany/pegasushoof`


### Build

Make example for this keyboard (after setting up your build environment):

    make bpiphany/pegasushoof/2021:via

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

### Additional Resources

With many thanks to Bathroom Epiphanies for his invention, engineering and contribution to the open source community.

* Schematics:
  * [2013](https://deskthority.net/wiki/File:Costar_Replacement_Controllers_Schematics.PNG)
  * [2015](https://github.com/Tecsmith/flying-horse-foot/blob/main/DataSheets/00__costar_controllers_schematics.png)
  * [2021](https://github.com/Tecsmith/flying-horse-foot/blob/main/docs/flying-horse-foot-v3.1.pdf)
* Original [bpiphany TMK source](https://github.com/BathroomEpiphanies/epiphanies_tmk_keyboard)
* Original [bpiphany QMK source](https://github.com/BathroomEpiphanies/epiphanies_qmk_keyboard)
