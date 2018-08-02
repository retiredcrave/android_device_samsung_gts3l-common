## TWRP device tree for Samsung Galaxy Tab S3 9.7 lte SM-T825
## gts3llte

Add to `.repo/local_manifests/gts3llte.xml`:

```xml
<?xml version="1.0" encoding="UTF-8"?>
<manifest>
  <project name="Valera1978/android_device_samsung_gts3llte" path="device/samsung/gts3llte" remote="github" revision="android-7.1" />
</manifest>
```

Get sources:
`repo init -u git://github.com/minimal-manifest-twrp/platform_manifest_twrp_omni.git -b twrp-7.1`

Then run `repo sync` to check it out.

To build:

```sh
. build/envsetup.sh
lunch omni_gts3llte-userdebug
mka recoveryimage
```
