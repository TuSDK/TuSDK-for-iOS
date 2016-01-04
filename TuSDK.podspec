Pod::Spec.new do |s|
  s.name                = 'TuSDK'
  s.version             = '2.3.2'
  s.summary             = 'TuSDK for iOS'
  s.homepage            = 'http://tusdk.com/'
  s.license             = { :type => 'Commercial', :text => '© 2014–2015 Lasque Technology Co., Ltd.' }
  s.author              = { 'TuSDK Team' => 'contact@tusdk.com' }
  s.platform            = :ios, '5.1.1'
  s.source              = { :git => 'https://github.com/TuSDK/TuSDK-for-iOS.git', :tag => '2.3.2' }
  s.resources           = 'Localization/*.lproj'
  s.vendored_frameworks = 'TuSDK.framework', 'TuSDKGeeV1.framework'
  s.requires_arc        = true
  s.dependency            'GPUImage', '~> 0.1.6'
end
