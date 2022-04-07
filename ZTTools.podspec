#
# Be sure to run `pod lib lint ZTTools.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ZTTools'
  s.version          = '0.1.6'
  s.summary          = '工具库'

  s.description      = <<-DESC
私有工具库，用到的东西都会放到这里，工具库也分为权限、逻辑、UI等
                       DESC

  s.homepage         = 'https://github.com/OCer/ZTTools'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Nakiri' => '347464661@qq.com' }
  s.source           = { :git => 'https://github.com/OCer/ZTTools.git', :tag => s.version.to_s }

  s.ios.deployment_target = '11.0'
  
  s.xcconfig = {
      'OTHER_LDFLAGS' => '-ObjC'
  }
  
#  Xcode12需要加上这2句
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

  s.vendored_frameworks = 'ZTTools/Classes/ZTTools.xcframework'
  s.frameworks = 'UIKit', 'Foundation', 'Photos', 'UserNotifications', 'AVFoundation', 'CoreGraphics'
  s.dependency 'AFNetworking'
  s.dependency 'Masonry'
  
end
