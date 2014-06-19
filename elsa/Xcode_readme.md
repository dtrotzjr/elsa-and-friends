#Xcode Build Notes

I tried my best to preserve what happens in the Makefiles but due to the lack of being able to configure a build prior to running it like you can with `./configure` I was limited in how well that came across. 

There are several Xcode projects and workspaces in each of the sub projects. For the most part you can just open the `elsa.xcworkspace` file located in this directory. The others are useful if you want to tweak some of the libraries for some reason.

To mimick in Xcode what happens when running `./configure` and `make` do the following:

1) Open `elsa.xcworkspace`
4) select the `ccparse` target and build. - When the build is finished check the build messages and see that it ends with something like 

```
typechecking results:
  errors:   0
  warnings: 0
parse=6ms tcheck=4ms integ=0ms elab=0ms
```
