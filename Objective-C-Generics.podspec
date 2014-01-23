Pod::Spec.new do |s|

  s.name         = "Objective-C-Generics"
  s.version      = "1.0.0"
  s.summary      = "Objective C Generics is an effort to try to support basic generics in Objective C."
  s.homepage     = "https://github.com/tomersh/Objective-C-Generics"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }

  s.author       = { "Tomer Shiri" => "github@shiri.info" }

  s.source       = { :git => "https://github.com/tomersh/Objective-C-Generics.git", :tag => s.version.to_s }

  # Platform setup
  s.requires_arc = true
  s.ios.deployment_target = '5.0'
  s.osx.deployment_target = '10.7'

  s.source_files = 'ObjectiveCGenerics.h'

end
