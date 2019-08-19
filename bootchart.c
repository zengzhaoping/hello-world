system/core/init/README.md
Bootcharting:						
On a device:

    adb shell 'touch /data/bootchart/enabled'
    
$ touch /data/bootchart/enabled
$ tar -czf bootchart.tgz header proc_stat.log proc_ps.log proc_diskstats.log
$ bootchart bootchart.tgz
