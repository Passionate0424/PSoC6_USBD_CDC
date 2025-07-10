################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rt-thread/libcpu/arm/cortex-m4/cpuport.c 

S_UPPER_SRCS += \
../rt-thread/libcpu/arm/cortex-m4/context_gcc.S 

OBJS += \
./rt-thread/libcpu/arm/cortex-m4/context_gcc.o \
./rt-thread/libcpu/arm/cortex-m4/cpuport.o 

S_UPPER_DEPS += \
./rt-thread/libcpu/arm/cortex-m4/context_gcc.d 

C_DEPS += \
./rt-thread/libcpu/arm/cortex-m4/cpuport.d 


# Each subdirectory must supply rules for building sources it contributes
rt-thread/libcpu/arm/cortex-m4/%.o: ../rt-thread/libcpu/arm/cortex-m4/%.S
	arm-none-eabi-gcc -x assembler-with-cpp -Xassembler -mimplicit-it=thumb -c -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffunction-sections -fdata-sections -x assembler-with-cpp -Wa,-mimplicit-it=thumb  -gdwarf-2 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
rt-thread/libcpu/arm/cortex-m4/%.o: ../rt-thread/libcpu/arm/cortex-m4/%.c
	arm-none-eabi-gcc -I"D:\RT-ThreadStudio\workspace\Test_usb" -I"D:\RT-ThreadStudio\workspace\Test_usb\applications" -I"D:\RT-ThreadStudio\workspace\Test_usb\board\ports" -I"D:\RT-ThreadStudio\workspace\Test_usb\board" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\HAL_Drivers" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\capsense" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\core-lib\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\COMPONENT_CAT1A\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\include_pvt" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\cmsis\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\devices\COMPONENT_CAT1A\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\drivers\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\csdidac" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\serial-flash" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\usbdev" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\psoc6cm0p" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\retarget-io" -I"D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2\config\GeneratedSource" -I"D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\drivers\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\drivers\usb\usbdevice" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\finsh" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\compilers\common\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\compilers\newlib" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\io\poll" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\io\stdio" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\ipc" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\libcpu\arm\common" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\libcpu\arm\cortex-m4" -include"D:\RT-ThreadStudio\workspace\Test_usb\rtconfig_preinc.h" -std=gnu11 -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffunction-sections -fdata-sections -Dgcc -O0 -gdwarf-2 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

