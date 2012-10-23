// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_embed_optimize_for.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "google/protobuf/unittest_optimize_for.pb.h"
// @@protoc_insertion_point(includes)

namespace protobuf_unittest {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();

class TestEmbedOptimizedForSize;

// ===================================================================

class TestEmbedOptimizedForSize : public ::google::protobuf::Message {
 public:
  TestEmbedOptimizedForSize();
  virtual ~TestEmbedOptimizedForSize();
  
  TestEmbedOptimizedForSize(const TestEmbedOptimizedForSize& from);
  
  inline TestEmbedOptimizedForSize& operator=(const TestEmbedOptimizedForSize& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const TestEmbedOptimizedForSize& default_instance();
  
  void Swap(TestEmbedOptimizedForSize* other);
  
  // implements Message ----------------------------------------------
  
  TestEmbedOptimizedForSize* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TestEmbedOptimizedForSize& from);
  void MergeFrom(const TestEmbedOptimizedForSize& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
  inline bool has_optional_message() const;
  inline void clear_optional_message();
  static const int kOptionalMessageFieldNumber = 1;
  inline const ::protobuf_unittest::TestOptimizedForSize& optional_message() const;
  inline ::protobuf_unittest::TestOptimizedForSize* mutable_optional_message();
  inline ::protobuf_unittest::TestOptimizedForSize* release_optional_message();
  
  // repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
  inline int repeated_message_size() const;
  inline void clear_repeated_message();
  static const int kRepeatedMessageFieldNumber = 2;
  inline const ::protobuf_unittest::TestOptimizedForSize& repeated_message(int index) const;
  inline ::protobuf_unittest::TestOptimizedForSize* mutable_repeated_message(int index);
  inline ::protobuf_unittest::TestOptimizedForSize* add_repeated_message();
  inline const ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
      repeated_message() const;
  inline ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
      mutable_repeated_message();
  
  // @@protoc_insertion_point(class_scope:protobuf_unittest.TestEmbedOptimizedForSize)
 private:
  inline void set_has_optional_message();
  inline void clear_has_optional_message();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::protobuf_unittest::TestOptimizedForSize* optional_message_;
  ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize > repeated_message_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto();
  
  void InitAsDefaultInstance();
  static TestEmbedOptimizedForSize* default_instance_;
};
// ===================================================================


// ===================================================================

// TestEmbedOptimizedForSize

// optional .protobuf_unittest.TestOptimizedForSize optional_message = 1;
inline bool TestEmbedOptimizedForSize::has_optional_message() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestEmbedOptimizedForSize::set_has_optional_message() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TestEmbedOptimizedForSize::clear_has_optional_message() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TestEmbedOptimizedForSize::clear_optional_message() {
  if (optional_message_ != NULL) optional_message_->::protobuf_unittest::TestOptimizedForSize::Clear();
  clear_has_optional_message();
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::optional_message() const {
  return optional_message_ != NULL ? *optional_message_ : *default_instance_->optional_message_;
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_optional_message() {
  set_has_optional_message();
  if (optional_message_ == NULL) optional_message_ = new ::protobuf_unittest::TestOptimizedForSize;
  return optional_message_;
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::release_optional_message() {
  clear_has_optional_message();
  ::protobuf_unittest::TestOptimizedForSize* temp = optional_message_;
  optional_message_ = NULL;
  return temp;
}

// repeated .protobuf_unittest.TestOptimizedForSize repeated_message = 2;
inline int TestEmbedOptimizedForSize::repeated_message_size() const {
  return repeated_message_.size();
}
inline void TestEmbedOptimizedForSize::clear_repeated_message() {
  repeated_message_.Clear();
}
inline const ::protobuf_unittest::TestOptimizedForSize& TestEmbedOptimizedForSize::repeated_message(int index) const {
  return repeated_message_.Get(index);
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::mutable_repeated_message(int index) {
  return repeated_message_.Mutable(index);
}
inline ::protobuf_unittest::TestOptimizedForSize* TestEmbedOptimizedForSize::add_repeated_message() {
  return repeated_message_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >&
TestEmbedOptimizedForSize::repeated_message() const {
  return repeated_message_;
}
inline ::google::protobuf::RepeatedPtrField< ::protobuf_unittest::TestOptimizedForSize >*
TestEmbedOptimizedForSize::mutable_repeated_message() {
  return &repeated_message_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5fembed_5foptimize_5ffor_2eproto__INCLUDED