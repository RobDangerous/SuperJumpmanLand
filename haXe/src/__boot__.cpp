#include <hxcpp.h>

#include <com/ktxsoftware/kje/Scene.h>
#include <haxe/io/Bytes.h>
#include <haxe/io/Error.h>
#include <com/ktxsoftware/kje/Direction.h>
#include <Main.h>
#include <com/ktxsoftware/kje/Tileset.h>
#include <com/ktxsoftware/kje/Key.h>
#include <Std.h>
#include <Hash.h>
#include <haxe/Log.h>
#include <cpp/io/File.h>
#include <cpp/io/FileSeek.h>
#include <com/ktxsoftware/kje/Color.h>
#include <com/ktxsoftware/sml/Koopa.h>
#include <com/ktxsoftware/kje/backend/cpp/Loader.h>
#include <com/ktxsoftware/sml/Fly.h>
#include <com/ktxsoftware/kje/Animation.h>
#include <StringBuf.h>
#include <com/ktxsoftware/sml/Gumba.h>
#include <com/ktxsoftware/sml/Enemy.h>
#include <com/ktxsoftware/sml/Exit.h>
#include <com/ktxsoftware/sml/Coin.h>
#include <Xml.h>
#include <XmlType.h>
#include <com/ktxsoftware/kje/KeyEvent.h>
#include <cpp/io/FileOutput.h>
#include <haxe/io/Output.h>
#include <Type.h>
#include <ValueType.h>
#include <com/ktxsoftware/sml/SuperMarioLand.h>
#include <com/ktxsoftware/kje/Game.h>
#include <com/ktxsoftware/sml/Mode.h>
#include <com/ktxsoftware/kje/backend/cpp/Music.h>
#include <IntIter.h>
#include <com/ktxsoftware/kje/Score.h>
#include <com/ktxsoftware/kje/backend/cpp/Sound.h>
#include <com/ktxsoftware/kje/Sound.h>
#include <Reflect.h>
#include <haxe/io/Eof.h>
#include <com/ktxsoftware/sml/BlockCoin.h>
#include <com/ktxsoftware/kje/HighscoreList.h>
#include <com/ktxsoftware/kje/backend/cpp/Image.h>
#include <com/ktxsoftware/kje/Image.h>
#include <com/ktxsoftware/kje/Tilemap.h>
#include <com/ktxsoftware/kje/Rectangle.h>
#include <com/ktxsoftware/kje/Music.h>
#include <cpp/io/FileInput.h>
#include <haxe/io/Input.h>
#include <cpp/Lib.h>
#include <com/ktxsoftware/sml/Jumpman.h>
#include <com/ktxsoftware/kje/backend/cpp/Painter.h>
#include <com/ktxsoftware/kje/Painter.h>
#include <com/ktxsoftware/kje/Loader.h>
#include <com/ktxsoftware/sml/BonusBlock.h>
#include <com/ktxsoftware/kje/Sprite.h>
#include <com/ktxsoftware/kje/Font.h>
#include <haxe/io/BytesBuffer.h>

void __boot_all()
{
hx::RegisterResources( hx::GetResources() );
::com::ktxsoftware::kje::Scene_obj::__register();
::haxe::io::Bytes_obj::__register();
::haxe::io::Error_obj::__register();
::com::ktxsoftware::kje::Direction_obj::__register();
::Main_obj::__register();
::com::ktxsoftware::kje::Tileset_obj::__register();
::com::ktxsoftware::kje::Key_obj::__register();
::Std_obj::__register();
::Hash_obj::__register();
::haxe::Log_obj::__register();
::cpp::io::File_obj::__register();
::cpp::io::FileSeek_obj::__register();
::com::ktxsoftware::kje::Color_obj::__register();
::com::ktxsoftware::sml::Koopa_obj::__register();
::com::ktxsoftware::kje::backend::cpp::Loader_obj::__register();
::com::ktxsoftware::sml::Fly_obj::__register();
::com::ktxsoftware::kje::Animation_obj::__register();
::StringBuf_obj::__register();
::com::ktxsoftware::sml::Gumba_obj::__register();
::com::ktxsoftware::sml::Enemy_obj::__register();
::com::ktxsoftware::sml::Exit_obj::__register();
::com::ktxsoftware::sml::Coin_obj::__register();
::Xml_obj::__register();
::XmlType_obj::__register();
::com::ktxsoftware::kje::KeyEvent_obj::__register();
::cpp::io::FileOutput_obj::__register();
::haxe::io::Output_obj::__register();
::Type_obj::__register();
::ValueType_obj::__register();
::com::ktxsoftware::sml::SuperMarioLand_obj::__register();
::com::ktxsoftware::kje::Game_obj::__register();
::com::ktxsoftware::sml::Mode_obj::__register();
::com::ktxsoftware::kje::backend::cpp::Music_obj::__register();
::IntIter_obj::__register();
::com::ktxsoftware::kje::Score_obj::__register();
::com::ktxsoftware::kje::backend::cpp::Sound_obj::__register();
::com::ktxsoftware::kje::Sound_obj::__register();
::Reflect_obj::__register();
::haxe::io::Eof_obj::__register();
::com::ktxsoftware::sml::BlockCoin_obj::__register();
::com::ktxsoftware::kje::HighscoreList_obj::__register();
::com::ktxsoftware::kje::backend::cpp::Image_obj::__register();
::com::ktxsoftware::kje::Image_obj::__register();
::com::ktxsoftware::kje::Tilemap_obj::__register();
::com::ktxsoftware::kje::Rectangle_obj::__register();
::com::ktxsoftware::kje::Music_obj::__register();
::cpp::io::FileInput_obj::__register();
::haxe::io::Input_obj::__register();
::cpp::Lib_obj::__register();
::com::ktxsoftware::sml::Jumpman_obj::__register();
::com::ktxsoftware::kje::backend::cpp::Painter_obj::__register();
::com::ktxsoftware::kje::Painter_obj::__register();
::com::ktxsoftware::kje::Loader_obj::__register();
::com::ktxsoftware::sml::BonusBlock_obj::__register();
::com::ktxsoftware::kje::Sprite_obj::__register();
::com::ktxsoftware::kje::Font_obj::__register();
::haxe::io::BytesBuffer_obj::__register();
::Xml_obj::__init__();
::cpp::Lib_obj::__boot();
::cpp::io::FileInput_obj::__boot();
::cpp::io::FileOutput_obj::__boot();
::Xml_obj::__boot();
::cpp::io::FileSeek_obj::__boot();
::cpp::io::File_obj::__boot();
::haxe::Log_obj::__boot();
::haxe::io::BytesBuffer_obj::__boot();
::com::ktxsoftware::kje::Font_obj::__boot();
::com::ktxsoftware::kje::Sprite_obj::__boot();
::com::ktxsoftware::sml::BonusBlock_obj::__boot();
::com::ktxsoftware::kje::Loader_obj::__boot();
::com::ktxsoftware::kje::Painter_obj::__boot();
::com::ktxsoftware::kje::backend::cpp::Painter_obj::__boot();
::com::ktxsoftware::sml::Jumpman_obj::__boot();
::haxe::io::Input_obj::__boot();
::com::ktxsoftware::kje::Music_obj::__boot();
::com::ktxsoftware::kje::Rectangle_obj::__boot();
::com::ktxsoftware::kje::Tilemap_obj::__boot();
::com::ktxsoftware::kje::Image_obj::__boot();
::com::ktxsoftware::kje::backend::cpp::Image_obj::__boot();
::com::ktxsoftware::kje::HighscoreList_obj::__boot();
::com::ktxsoftware::sml::BlockCoin_obj::__boot();
::haxe::io::Eof_obj::__boot();
::Reflect_obj::__boot();
::com::ktxsoftware::kje::Sound_obj::__boot();
::com::ktxsoftware::kje::backend::cpp::Sound_obj::__boot();
::com::ktxsoftware::kje::Score_obj::__boot();
::IntIter_obj::__boot();
::com::ktxsoftware::kje::backend::cpp::Music_obj::__boot();
::com::ktxsoftware::sml::Mode_obj::__boot();
::com::ktxsoftware::kje::Game_obj::__boot();
::com::ktxsoftware::sml::SuperMarioLand_obj::__boot();
::ValueType_obj::__boot();
::Type_obj::__boot();
::haxe::io::Output_obj::__boot();
::com::ktxsoftware::kje::KeyEvent_obj::__boot();
::XmlType_obj::__boot();
::com::ktxsoftware::sml::Coin_obj::__boot();
::com::ktxsoftware::sml::Exit_obj::__boot();
::com::ktxsoftware::sml::Enemy_obj::__boot();
::com::ktxsoftware::sml::Gumba_obj::__boot();
::StringBuf_obj::__boot();
::com::ktxsoftware::kje::Animation_obj::__boot();
::com::ktxsoftware::sml::Fly_obj::__boot();
::com::ktxsoftware::kje::backend::cpp::Loader_obj::__boot();
::com::ktxsoftware::sml::Koopa_obj::__boot();
::com::ktxsoftware::kje::Color_obj::__boot();
::Hash_obj::__boot();
::Std_obj::__boot();
::com::ktxsoftware::kje::Key_obj::__boot();
::com::ktxsoftware::kje::Tileset_obj::__boot();
::Main_obj::__boot();
::com::ktxsoftware::kje::Direction_obj::__boot();
::haxe::io::Error_obj::__boot();
::haxe::io::Bytes_obj::__boot();
::com::ktxsoftware::kje::Scene_obj::__boot();
}

