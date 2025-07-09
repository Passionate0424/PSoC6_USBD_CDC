################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_capsense.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_clocks.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_clocks1.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_dmas.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_peripherals.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_pins.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_qspi_memslot.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_routing.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_system.c \
../libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_usbdev.c 

OBJS += \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_capsense.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_clocks.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_clocks1.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_dmas.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_peripherals.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_pins.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_qspi_memslot.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_routing.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_system.o \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_usbdev.o 

C_DEPS += \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_capsense.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_clocks.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_clocks1.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_dmas.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_peripherals.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_pins.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_qspi_memslot.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_routing.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_system.d \
./libs/TARGET_RTT-062S2/config/GeneratedSource/cycfg_usbdev.d 


# Each subdirectory must supply rules for building sources it contributes
libs/TARGET_RTT-062S2/config/GeneratedSource/%.o: ../libs/TARGET_RTT-062S2/config/GeneratedSource/%.c
	arm-none-eabi-gcc -I"D:\RT-ThreadStudio\workspace\Test_usb" -I"D:\RT-ThreadStudio\workspace\Test_usb\applications" -I"D:\RT-ThreadStudio\workspace\Test_usb\board\ports" -I"D:\RT-ThreadStudio\workspace\Test_usb\board" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\HAL_Drivers" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\capsense" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\core-lib\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\COMPONENT_CAT1A\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\include_pvt" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\cmsis\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\devices\COMPONENT_CAT1A\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\drivers\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\csdidac" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\serial-flash" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\usbdev" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\psoc6cm0p" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\retarget-io" -I"D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2\config\GeneratedSource" -I"D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\drivers\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\drivers\usb\usbdevice" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\finsh" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\compilers\common\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\compilers\newlib" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\io\poll" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\io\stdio" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\ipc" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\libcpu\arm\common" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\libcpu\arm\cortex-m4" -include"D:\RT-ThreadStudio\workspace\Test_usb\rtconfig_preinc.h" -std=gnu11 -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffunction-sections -fdata-sections -Dgcc -O0 -gdwarf-2 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

