rm -rf opk
mkdir -p opk
cp build-fks/ecwolf gcw0-assets
mksquashfs gcw0-assets ecwolf.opk -all-root -noappend -no-exports -no-xattrs -no-progress > /dev/null
# rm -rf opk
