// swift-tools-version:6.0
import PackageDescription

let package = Package(
    name: "MKLoRaDeviceModePageModule",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "MKLoRaDeviceModePageModule",
            targets: ["MKLoRaDeviceModePageModule"]
        )
    ],
    dependencies: [
        .package(url: "https://github.com/MOKO-iOS-Base-Library/MKBaseModuleLibrary.git", from: "2.2.14"),
        .package(url: "https://github.com/MOKO-iOS-Base-Library/MKCustomUIModule.git", from: "2.1.14"),
    ],
    targets: [
        .target(
            name: "MKLoRaDeviceModePageModule",
            dependencies: [
                "MKBaseModuleLibrary",
                "MKCustomUIModule",
            ],
            path: "MKLoRaDeviceModePageModule",
            sources: ["Classes"],
            resources: [.process("Assets")],
            publicHeadersPath: "Classes",
            cSettings: [
                .headerSearchPath("Classes/Pages"),
                .headerSearchPath("Classes/Pages/MotionModePage"),
                .headerSearchPath("Classes/Pages/MotionModePage/Controller"),
                .headerSearchPath("Classes/Pages/MotionModePage/Protocol"),
                .headerSearchPath("Classes/Pages/PeriodicModePage"),
                .headerSearchPath("Classes/Pages/PeriodicModePage/Controller"),
                .headerSearchPath("Classes/Pages/PeriodicModePage/Protocol"),
                .headerSearchPath("Classes/Pages/StandbyModePage"),
                .headerSearchPath("Classes/Pages/StandbyModePage/Controller"),
                .headerSearchPath("Classes/Pages/StandbyModePage/Protocol"),
                .headerSearchPath("Classes/Pages/TimeSegmentedModePage"),
                .headerSearchPath("Classes/Pages/TimeSegmentedModePage/Controller"),
                .headerSearchPath("Classes/Pages/TimeSegmentedModePage/Model"),
                .headerSearchPath("Classes/Pages/TimeSegmentedModePage/Protocol"),
                .headerSearchPath("Classes/Pages/TimeSegmentedModePage/View"),
                .headerSearchPath("Classes/Pages/TimingModePage"),
                .headerSearchPath("Classes/Pages/TimingModePage/Controller"),
                .headerSearchPath("Classes/Pages/TimingModePage/Model"),
                .headerSearchPath("Classes/Pages/TimingModePage/Protocol"),
                .headerSearchPath("Classes/Views"),
                .headerSearchPath("Classes/Views/ReportTimePointCell"),
                .headerSearchPath("Classes/Views/TimingModeAddCell"),
                .headerSearchPath("Classes/Vendor/MLInputDodger"),
            ],
            linkerSettings: [
                .linkedFramework("UIKit"),
            ]
        )
    ]
)
