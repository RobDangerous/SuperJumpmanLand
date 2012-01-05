importPackage(com.ktxsoftware.kake);

var solution = new Solution("SML");
var project = new Project("SML");

project.addFiles("Sources/**.h", "Sources/**.cpp", "haXe/**.h", "haXe/**.cpp");
project.addIncludeDir("C:/Motion-Twin/haxe/lib/hxcpp/2,08,0");
project.setDebugDir("Deployment");

project.addSubProject(Solution.createProject("Kt"));

solution.addProject(project);