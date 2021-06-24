Hello_world Example 
==============================================

Quick Start
--------------

Example supports building with [Zephyr Software Development Kit (SDK)](https://docs.zephyrproject.org/latest/getting_started/installation_linux.html#zephyr-sdk) and running with MetaWare Debuger on [nSim simulator](https://www.synopsys.com/dw/ipdir.php?ds=sim_nSIM).

### Add embarc_mli module to Zephyr instruction

1. Open command line and change working directory to './zephyrproject/zephyr'

2. Download embarc_mli version 1.0

        west update

3. Change working directory to './zephyrproject/modules/lib/embarc_mli'

4. Create a new folder named zephyr and change working directory to it

        mkdir zephyr
        cd zephyr

5. Create module.yml file

        touch module.yml
        vi module.yml

6. Copy and paste the content listed below in vim editor

        name: embarc_mli
        build:
            cmake-ext: True
            kconfig-ext: True

### Build with Zephyr SDK toolchain

    Build requirements:
        - Zephyr SDK toolchain version 0.12.3 or higher
        - gmake

1. Open command line and change working directory to './zephyrproject/zephyr/samples/modules/embarc_mli/hello_world'

2. Build example

        west build -b nsim_em samples/modules/embarc_mli/hello_world

### Run example

1. Run example 

        west flash

    Result shall be:

        ************************************
        2 4 6 8 10 12 14 16 
        0 0 0 0 0 0 0 0 
        ************************************
        Hello World! nsim

Example Structure
--------------------
Structure of example application may be logically divided on three parts:

* **Application.** Implements Input/output data flow and data processing by the other modules. Application includes
   * ml_api_cifar10_caffe_main.c
* **Inference Module.** Uses embARC MLI Library to process input according to pre-defined graph. All model related constants are pre-defined and model coefficients is declared in the separate compile unit 
   * cifar10_model.h
   * cifar10_model_chw.c (cifar10_model_hwc.c)
   * cifar10_constants.h
   * cifar10_coefficients_chw.c (cifar10_coefficients_hwc.c)

References
----------------------------
CIFAR-10 Dataset:
> Alex Krizhevsky. *"Learning Multiple Layers of Features from Tiny Images."* 2009.

Caffe framework:
> Jia, Yangqing and Shelhamer, Evan and Donahue, Jeff and Karayev, Sergey and Long, Jonathan and Girshick, Ross and Guadarrama, Sergio and Darrell, Trevor. *"Caffe: Convolu-tional Architecture for Fast Feature Embedding."* arXiv preprint arXiv:1408.5093. 2014: http://caffe.berkeleyvision.org/
