################################################################################
# 自动生成的文件。不要编辑！
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../rt-thread/src/clock.c \
../rt-thread/src/components.c \
../rt-thread/src/device.c \
../rt-thread/src/idle.c \
../rt-thread/src/ipc.c \
../rt-thread/src/irq.c \
../rt-thread/src/kservice.c \
../rt-thread/src/mem.c \
../rt-thread/src/mempool.c \
../rt-thread/src/object.c \
../rt-thread/src/scheduler_up.c \
../rt-thread/src/thread.c \
../rt-thread/src/timer.c 

OBJS += \
./rt-thread/src/clock.o \
./rt-thread/src/components.o \
./rt-thread/src/device.o \
./rt-thread/src/idle.o \
./rt-thread/src/ipc.o \
./rt-thread/src/irq.o \
./rt-thread/src/kservice.o \
./rt-thread/src/mem.o \
./rt-thread/src/mempool.o \
./rt-thread/src/object.o \
./rt-thread/src/scheduler_up.o \
./rt-thread/src/thread.o \
./rt-thread/src/timer.o 

C_DEPS += \
./rt-thread/src/clock.d \
./rt-thread/src/components.d \
./rt-thread/src/device.d \
./rt-thread/src/idle.d \
./rt-thread/src/ipc.d \
./rt-thread/src/irq.d \
./rt-thread/src/kservice.d \
./rt-thread/src/mem.d \
./rt-thread/src/mempool.d \
./rt-thread/src/object.d \
./rt-thread/src/scheduler_up.d \
./rt-thread/src/thread.d \
./rt-thread/src/timer.d 


# Each subdirectory must supply rules for building sources it contributes
rt-thread/src/%.o: ../rt-thread/src/%.c
	arm-none-eabi-gcc -I"D:\RT-ThreadStudio\workspace\Test_usb" -I"D:\RT-ThreadStudio\workspace\Test_usb\applications" -I"D:\RT-ThreadStudio\workspace\Test_usb\board\ports" -I"D:\RT-ThreadStudio\workspace\Test_usb\board" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\HAL_Drivers" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\capsense" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\core-lib\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\COMPONENT_CAT1A\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\include_pvt" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-hal-cat1\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\cmsis\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\devices\COMPONENT_CAT1A\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb-pdl-cat1\drivers\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\csdidac" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\serial-flash" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\mtb_shared\usbdev" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\psoc6cm0p" -I"D:\RT-ThreadStudio\workspace\Test_usb\libraries\IFX_PSOC6_HAL\retarget-io" -I"D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2\config\GeneratedSource" -I"D:\RT-ThreadStudio\workspace\Test_usb\libs\TARGET_RTT-062S2" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\drivers\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\drivers\usb\usbdevice" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\finsh" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\compilers\common\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\compilers\newlib" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\io\poll" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\io\stdio" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\components\libc\posix\ipc" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\include" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\libcpu\arm\common" -I"D:\RT-ThreadStudio\workspace\Test_usb\rt-thread\libcpu\arm\cortex-m4" -include"D:\RT-ThreadStudio\workspace\Test_usb\rtconfig_preinc.h" -std=gnu11 -mcpu=cortex-m4 -mthumb -mfpu=fpv4-sp-d16 -mfloat-abi=hard -ffunction-sections -fdata-sections -Dgcc -O0 -gdwarf-2 -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"

