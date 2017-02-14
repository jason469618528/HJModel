Pod::Spec.new do |s|
  s.name             = 'HJModel'
  s.version          = '0.1.0'
  s.summary          = '一个测试的basemodel'
  s.homepage         = 'https://github.com/jason469618528/HJModel'
  s.license          = 'MIT'
  s.author           = { 'jason469618528' => '469618528@qq.com' }
  s.source           = { :git => 'https://github.com/jason469618528/HJModel.git', :tag => s.version.to_s }
  s.ios.deployment_target = '7.0'
  s.source_files     = 'HJBaseModel/**/*.{h,m}'
  s.requires_arc     = true
end
