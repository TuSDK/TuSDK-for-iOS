Pod::Spec.new do |s|
  s.name                = 'TuSDK'
  s.version             = '2.8.0'
  s.summary             = 'TuSDK for iOS'
  s.homepage            = 'http://tusdk.com/'
  s.license             = { :type => 'Commercial', :text => '© 2014–2016 Lasque Technology Co., Ltd.' }
  s.author              = { 'TuSDK Team' => 'contact@tusdk.com' }
  s.platform            = :ios, '6.0'
  s.source              = { :git => 'https://github.com/TuSDK/TuSDK-for-iOS.git', :tag => '2.8.0' }
  s.requires_arc        = true

  s.subspec 'GPUImage' do |g|
    g.dependency            'GPUImage', '~> 0.1.6'
  end

  s.subspec 'Core' do |c|
    c.vendored_frameworks = 'TuSDK.framework'
  end

  s.subspec 'ImageGeeV1' do |i|
    i.vendored_frameworks = 'TuSDKGeeV1.framework'
    i.resources           = 'Localization/*.lproj'
  end

  s.subspec 'ImageGeeV2' do |i|
    i.vendored_frameworks = 'TuSDKGeeV2.framework'
    i.resources           = 'Localization/*.lproj'
  end

end
