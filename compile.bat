 @echo off
 sp65 -r nemutlu.pcx -c geos-bitmap -w emartibmp.c,ident=emartibmp
 cl65.exe -O -t geos emartiApp.c Appemarti.grc
 echo If no error, Create D64 image disk; and then, insert "emartiApp" into the D64. 
 echo Find the CONVERT program on the boot disk. 
 echo double-click it to run that program. Click on the Disk icon; 
 echo put the disk with "emartiApp" into the drive; and, click the OK icon. 
 echo Use the little icons under the list of file-names 
 echo to move through that list until you find "emartiApp". 
 echo Click on it; and then, click on the Convrt icon. Everything is Ok. 
 echo Now, you must find "emarti App" on page. Double-click on its icon.
 pause
 
 
 