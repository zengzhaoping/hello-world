android/system/core/reboot/reboot.c
int main(int argc, char* argv[]) {
    case 'p':
            cmd = "shutdown";
            break;
            }
            
  android/system/core/init/reboot.cpp         
  switch (cmd) {
        case ANDROID_RB_POWEROFF:
            reboot(RB_POWER_OFF);
            break;

        case ANDROID_RB_RESTART2:
            syscall(__NR_reboot, LINUX_REBOOT_MAGIC1, LINUX_REBOOT_MAGIC2,
                    LINUX_REBOOT_CMD_RESTART2, rebootTarget.c_str());
            break;
            }
            
 kernel/reboot.c           
SYSCALL_DEFINE4(reboot, int, magic1, int, magic2, unsigned int, cmd,
		void __user *, arg)
{
	case LINUX_REBOOT_CMD_RESTART2:
		ret = strncpy_from_user(&buffer[0], arg, sizeof(buffer) - 1);
		if (ret < 0) {
			ret = -EFAULT;
			break;
		}
		buffer[sizeof(buffer) - 1] = '\0';

		kernel_restart(buffer);
		break;
}
kernel_restart(buffer);
    machine_restart(cmd);
          do_kernel_restart(cmd);
                  atomic_notifier_call_chain(&restart_handler_list, reboot_mode, cmd);
