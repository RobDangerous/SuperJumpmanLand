importPackage(com.ktxsoftware.kake);

var solution = new Solution("SML");
var project = new Project("SML");

project.addFiles("Sources/**.h", "Sources/**.cpp", "haXe/**.h", "haXe/**.cpp", "hxcpp/**.h", "hxcpp/**.cpp");
project.addIncludeDirs("hxcpp/include", "haXe/include");
project.setDebugDir("Deployment");
project.addDefine("HX_WINDOWS");
project.addSubProject(Solution.createProject("Kt"));

solution.addProject(project);